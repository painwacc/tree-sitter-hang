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
        source_file: $ => $.stat,





        /*
         * Types
         */
        type: $ => 'string',

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
