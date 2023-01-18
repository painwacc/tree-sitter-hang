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
            $.str_liter,
        ),
        str_liter: $ => /"([[\x00-\x7f]&&[^\\'"\n]]|(\\[0btnfr"'\\]))*"/,
        array_liter: $ => seq('[', intersperse(expr($), ','), ']'),
        ident: $ => /[_a-zA-Z][_0-9a-zA-Z]*/,
        array_elem: $ => seq(ident($), field('indices', $.array_indexes)),
        array_indexes: $ => repeat1(seq('[', expr($), ']')),



        /* 
         * Statements
         */

        stats: $ => intersperse1(stat($), ';'),

        stat: $ => kind(
            $.decl_stat,
        ),

        decl_stat: $ => seq(type($), field('ident', $.ident), '=', expr($)),

        line_comment: $ => /#[^\n\r]*[\n\r]*/
    }
});
