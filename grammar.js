module.exports = grammar({
    name: 'hangs',

    rules: {
        source_file: $ => /"([[\x00-\x7f]&&[^"]])*"/,
    }
});
