module.exports = grammar({
    name: 'wacc',


    rules: {
        source_file: $ => /"([[\x00-\x7f]&&[^\\'"\n]]|(\\[0btnfr"'\\]))*"/,
    }
});
