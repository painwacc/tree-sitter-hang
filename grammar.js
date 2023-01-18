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
        type: $ => 'string',

        /*
         * Expressions
         */
        expr: $ => /"([[\x00-\x7f]&&[^\\'"\n]]|(\\[0btnfr"'\\]))*"/,





        ident: $ => 's',

        stat: $ => seq($.type, field('ident', $.ident), '=', $.expr),

        line_comment: $ => /#[^\n\r]*[\n\r]*/
    }
});
