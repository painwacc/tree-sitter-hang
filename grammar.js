function intersperse1(item, separator) {
    return seq(item, repeat(seq(separator, item)));
}
function intersperse(item, separator) {
    return optional(intersperse1(item, separator));
}

function make_binop($, prec_level, op_parser) {
    return prec.left(prec_level, seq(
        field('lhs', $.expr), field('op', op_parser), field('rhs', $.expr)
    ));
}

function mk_named(name) {
    function inner($) {
        return field(name, $[name]);
    }
    return inner;
}

var expr = mk_named('expr');
var lvalue = mk_named('lvalue');
var rvalue = mk_named('rvalue');
var type = mk_named('type');
var stats = mk_named('stats');
var stat = mk_named('stat');
var param = mk_named('param');
var ident = mk_named('ident');
var decl = mk_named('decl');

function kind(...options) {
    return field('__kind', choice(...options));
}

module.exports = grammar({
    name: 'wacc',

    extras: $ => [
        $.line_comment,
        /\s/,
    ],

    // word: $ => $.ident,

    // Order must match TokenType in scanner.cc
    // externals: $ => [$.ident],

    rules: {
        source_file: $ => seq(
            'begin',
            field('funcs', repeat($.func)),
            field('main', $.stats),
            'end',
        ),

        func: $ => seq(
            decl($),
            'is',
            field('body', $.stats),
            'end',
        ),

        decl: $ => seq(
            field('return_type', $.type),
            field('name', $.ident),
            '(',
            field('params', optional($.param_list)),
            ')',
        ),

        param_list: $ => intersperse1(param($), ','),
        param: $ => seq(type($), ident($)),

        /*
         * Keywords
         */
        bool: $ => 'bool',
        char: $ => 'char',
        chr: $ => 'chr',
        false: $ => 'false',
        fst: $ => 'fst',
        int: $ => 'int',
        len: $ => 'len',
        null: $ => 'null',
        ord: $ => 'ord',
        snd: $ => 'snd',
        string: $ => 'string',
        true: $ => 'true',

        /*
         * Operators
         */
        op_bang: $ => '!',
        op_asterix: $ => '*',
        op_slash: $ => '/',
        op_percent: $ => '%',
        op_plus: $ => '+',
        op_dash: $ => '-',
        op_gt: $ => '>',
        op_ge: $ => '>=',
        op_lt: $ => '<',
        op_le: $ => '<=',
        op_eq: $ => '==',
        op_ne: $ => '!=',
        op_and: $ => '&&',
        op_or: $ => '||',

        /*
         * Types
         */
        type: $ => kind($.base_type, $.array_type, $.pair_type),
        base_type: $ => kind($.int, $.bool, $.char, $.string),
        array_type: $ => seq(field('inner_type', $.type), '[', ']'),
        pair_type: $ => seq('pair', '(', field('lhs', $.pair_elem_type), ',', field('rhs', $.pair_elem_type), ')'),
        pair_elem_type: $ => kind($.base_type, $.array_type, $.raw_pair_type),
        raw_pair_type: $ => 'pair',

        /*
         * Expressions
         */
        expr: $ => kind(
            $.int_liter,
            $.bool_liter,
            $.char_liter,
            $.str_liter,
            $.pair_null,
            $.ident,
            $.array_elem,
            $.unary_expr,
            $.binary_expr,
            $.bracket_expr,
        ),
        int_liter: $ => /[+-]?[0-9]+/,
        bool_liter: $ => kind($.true, $.false),
        char_liter: $ => /'([[\x00-\x7f]&&[^\\'"\n]]|(\\[0btnfr"'\\]))'/,
        str_liter: $ => /"([[\x00-\x7f]&&[^\\'"\n]]|(\\[0btnfr"'\\]))*"/,
        array_liter: $ => seq('[', intersperse(expr($), ','), ']'),
        ident: $ => /[_a-zA-Z][_0-9a-zA-Z]*/,
        array_elem: $ => seq(ident($), field('indices', $.array_indexes)),
        array_indexes: $ => repeat1(seq('[', expr($), ']')),
        pair_null: $ => 'null',
        unary_op: $ => kind($.op_bang, $.op_dash, $.len, $.ord, $.chr),
        unary_expr: $ => prec(7, seq(field('op', $.unary_op), field('expr', $.expr))),
        binary_expr: $ => kind(
            make_binop($, 6, $.op_asterix),
            make_binop($, 6, $.op_slash),
            make_binop($, 6, $.op_percent),
            make_binop($, 5, $.op_plus),
            make_binop($, 5, $.op_dash),
            make_binop($, 4, $.op_gt),
            make_binop($, 4, $.op_ge),
            make_binop($, 4, $.op_lt),
            make_binop($, 4, $.op_le),
            make_binop($, 3, $.op_eq),
            make_binop($, 3, $.op_ne),
            make_binop($, 2, $.op_and),
            make_binop($, 1, $.op_or)
        ),
        bracket_expr: $ => seq('(', expr($), ')'),


        /*
         * LValues and RValues
         */
        lvalue: $ => kind(
            $.ident,
            $.array_elem,
            $.pair_elem,
        ),
        rvalue: $ => kind(
            $.expr,
            $.array_liter,
            $.newpair,
            $.pair_elem,
            $.call,
        ),
        newpair: $ => seq('newpair', '(', field('fst', $.expr), ',', field('snd', $.expr), ')'),
        call: $ => seq('call', field('func_name', $.ident), '(', field('arg_list', optional($.arg_list)), ')'),

        pair_elem: $ => seq(field('selector', $.pair_elem_selector), field('lvalue', $.lvalue)),
        pair_elem_selector: $ => kind($.fst, $.snd),
        arg_list: $ => intersperse1(expr($), ','),

        /* 
         * Statements
         */

        stats: $ => intersperse1(stat($), ';'),

        stat: $ => kind(
            $.skip_stat,
            $.decl_stat,
            $.assign_stat,
            $.read_stat,
            $.free_stat,
            $.return_stat,
            $.exit_stat,
            $.print_stat,
            $.println_stat,
            $.if_stat,
            $.while_stat,
            $.block_stat,
        ),

        skip_stat: $ => 'skip',
        decl_stat: $ => seq(type($), field('ident', $.ident), '=', rvalue($)),
        assign_stat: $ => seq(lvalue($), '=', rvalue($)),
        read_stat: $ => seq('read', lvalue($)),
        free_stat: $ => seq('free', expr($)),
        return_stat: $ => seq('return', expr($)),
        exit_stat: $ => seq('exit', expr($)),
        print_stat: $ => seq('print', expr($)),
        println_stat: $ => seq('println', expr($)),
        if_stat: $ => seq('if', field('cond', $.expr), 'then', field('when', $.stats), 'else', field('unless', $.stats), 'fi'),
        while_stat: $ => seq('while', field('cond', $.expr), 'do', field('body', $.stats), 'done'),
        block_stat: $ => seq('begin', stats($), 'end'),

        line_comment: $ => /#[^\n\r]*[\n\r]*/
    }
});
