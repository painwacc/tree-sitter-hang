#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 24
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 30

enum {
  anon_sym_begin = 1,
  anon_sym_end = 2,
  anon_sym_is = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COMMA = 6,
  sym_bool = 7,
  sym_char = 8,
  sym_chr = 9,
  sym_false = 10,
  sym_fst = 11,
  sym_int = 12,
  sym_len = 13,
  anon_sym_null = 14,
  sym_ord = 15,
  sym_snd = 16,
  sym_string = 17,
  sym_true = 18,
  sym_op_bang = 19,
  sym_op_asterix = 20,
  sym_op_slash = 21,
  sym_op_percent = 22,
  sym_op_plus = 23,
  sym_op_dash = 24,
  sym_op_gt = 25,
  sym_op_ge = 26,
  sym_op_lt = 27,
  sym_op_le = 28,
  sym_op_eq = 29,
  sym_op_ne = 30,
  sym_op_and = 31,
  sym_op_or = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_pair = 35,
  sym_int_liter = 36,
  sym_char_liter = 37,
  sym_str_liter = 38,
  sym_ident = 39,
  anon_sym_newpair = 40,
  anon_sym_call = 41,
  anon_sym_SEMI = 42,
  sym_skip_stat = 43,
  anon_sym_EQ = 44,
  anon_sym_read = 45,
  anon_sym_free = 46,
  anon_sym_return = 47,
  anon_sym_exit = 48,
  anon_sym_print = 49,
  anon_sym_println = 50,
  anon_sym_if = 51,
  anon_sym_then = 52,
  anon_sym_else = 53,
  anon_sym_fi = 54,
  anon_sym_while = 55,
  anon_sym_do = 56,
  anon_sym_done = 57,
  sym_line_comment = 58,
  sym_source_file = 59,
  sym_func = 60,
  sym_decl = 61,
  sym_param_list = 62,
  sym_param = 63,
  sym_type = 64,
  sym_base_type = 65,
  sym_array_type = 66,
  sym_pair_type = 67,
  sym_pair_elem_type = 68,
  sym_raw_pair_type = 69,
  sym_expr = 70,
  sym_array_liter = 71,
  sym_array_elem = 72,
  sym_array_indexes = 73,
  sym_lvalue = 74,
  sym_rvalue = 75,
  sym_newpair = 76,
  sym_call = 77,
  sym_pair_elem = 78,
  sym_pair_elem_selector = 79,
  sym_arg_list = 80,
  sym_stats = 81,
  sym_stat = 82,
  sym_decl_stat = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_param_list_repeat1 = 85,
  aux_sym_array_liter_repeat1 = 86,
  aux_sym_array_indexes_repeat1 = 87,
  aux_sym_stats_repeat1 = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [anon_sym_is] = "is",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [sym_bool] = "bool",
  [sym_char] = "char",
  [sym_chr] = "chr",
  [sym_false] = "false",
  [sym_fst] = "fst",
  [sym_int] = "int",
  [sym_len] = "len",
  [anon_sym_null] = "null",
  [sym_ord] = "ord",
  [sym_snd] = "snd",
  [sym_string] = "string",
  [sym_true] = "true",
  [sym_op_bang] = "op_bang",
  [sym_op_asterix] = "op_asterix",
  [sym_op_slash] = "op_slash",
  [sym_op_percent] = "op_percent",
  [sym_op_plus] = "op_plus",
  [sym_op_dash] = "op_dash",
  [sym_op_gt] = "op_gt",
  [sym_op_ge] = "op_ge",
  [sym_op_lt] = "op_lt",
  [sym_op_le] = "op_le",
  [sym_op_eq] = "op_eq",
  [sym_op_ne] = "op_ne",
  [sym_op_and] = "op_and",
  [sym_op_or] = "op_or",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_pair] = "pair",
  [sym_int_liter] = "int_liter",
  [sym_char_liter] = "char_liter",
  [sym_str_liter] = "str_liter",
  [sym_ident] = "ident",
  [anon_sym_newpair] = "newpair",
  [anon_sym_call] = "call",
  [anon_sym_SEMI] = ";",
  [sym_skip_stat] = "skip_stat",
  [anon_sym_EQ] = "=",
  [anon_sym_read] = "read",
  [anon_sym_free] = "free",
  [anon_sym_return] = "return",
  [anon_sym_exit] = "exit",
  [anon_sym_print] = "print",
  [anon_sym_println] = "println",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_fi] = "fi",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_done] = "done",
  [sym_line_comment] = "line_comment",
  [sym_source_file] = "source_file",
  [sym_func] = "func",
  [sym_decl] = "decl",
  [sym_param_list] = "param_list",
  [sym_param] = "param",
  [sym_type] = "type",
  [sym_base_type] = "base_type",
  [sym_array_type] = "array_type",
  [sym_pair_type] = "pair_type",
  [sym_pair_elem_type] = "pair_elem_type",
  [sym_raw_pair_type] = "raw_pair_type",
  [sym_expr] = "expr",
  [sym_array_liter] = "array_liter",
  [sym_array_elem] = "array_elem",
  [sym_array_indexes] = "array_indexes",
  [sym_lvalue] = "lvalue",
  [sym_rvalue] = "rvalue",
  [sym_newpair] = "newpair",
  [sym_call] = "call",
  [sym_pair_elem] = "pair_elem",
  [sym_pair_elem_selector] = "pair_elem_selector",
  [sym_arg_list] = "arg_list",
  [sym_stats] = "stats",
  [sym_stat] = "stat",
  [sym_decl_stat] = "decl_stat",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_param_list_repeat1] = "param_list_repeat1",
  [aux_sym_array_liter_repeat1] = "array_liter_repeat1",
  [aux_sym_array_indexes_repeat1] = "array_indexes_repeat1",
  [aux_sym_stats_repeat1] = "stats_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_bool] = sym_bool,
  [sym_char] = sym_char,
  [sym_chr] = sym_chr,
  [sym_false] = sym_false,
  [sym_fst] = sym_fst,
  [sym_int] = sym_int,
  [sym_len] = sym_len,
  [anon_sym_null] = anon_sym_null,
  [sym_ord] = sym_ord,
  [sym_snd] = sym_snd,
  [sym_string] = sym_string,
  [sym_true] = sym_true,
  [sym_op_bang] = sym_op_bang,
  [sym_op_asterix] = sym_op_asterix,
  [sym_op_slash] = sym_op_slash,
  [sym_op_percent] = sym_op_percent,
  [sym_op_plus] = sym_op_plus,
  [sym_op_dash] = sym_op_dash,
  [sym_op_gt] = sym_op_gt,
  [sym_op_ge] = sym_op_ge,
  [sym_op_lt] = sym_op_lt,
  [sym_op_le] = sym_op_le,
  [sym_op_eq] = sym_op_eq,
  [sym_op_ne] = sym_op_ne,
  [sym_op_and] = sym_op_and,
  [sym_op_or] = sym_op_or,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_pair] = anon_sym_pair,
  [sym_int_liter] = sym_int_liter,
  [sym_char_liter] = sym_char_liter,
  [sym_str_liter] = sym_str_liter,
  [sym_ident] = sym_ident,
  [anon_sym_newpair] = anon_sym_newpair,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_skip_stat] = sym_skip_stat,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_free] = anon_sym_free,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_exit] = anon_sym_exit,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_println] = anon_sym_println,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_fi] = anon_sym_fi,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_done] = anon_sym_done,
  [sym_line_comment] = sym_line_comment,
  [sym_source_file] = sym_source_file,
  [sym_func] = sym_func,
  [sym_decl] = sym_decl,
  [sym_param_list] = sym_param_list,
  [sym_param] = sym_param,
  [sym_type] = sym_type,
  [sym_base_type] = sym_base_type,
  [sym_array_type] = sym_array_type,
  [sym_pair_type] = sym_pair_type,
  [sym_pair_elem_type] = sym_pair_elem_type,
  [sym_raw_pair_type] = sym_raw_pair_type,
  [sym_expr] = sym_expr,
  [sym_array_liter] = sym_array_liter,
  [sym_array_elem] = sym_array_elem,
  [sym_array_indexes] = sym_array_indexes,
  [sym_lvalue] = sym_lvalue,
  [sym_rvalue] = sym_rvalue,
  [sym_newpair] = sym_newpair,
  [sym_call] = sym_call,
  [sym_pair_elem] = sym_pair_elem,
  [sym_pair_elem_selector] = sym_pair_elem_selector,
  [sym_arg_list] = sym_arg_list,
  [sym_stats] = sym_stats,
  [sym_stat] = sym_stat,
  [sym_decl_stat] = sym_decl_stat,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_param_list_repeat1] = aux_sym_param_list_repeat1,
  [aux_sym_array_liter_repeat1] = aux_sym_array_liter_repeat1,
  [aux_sym_array_indexes_repeat1] = aux_sym_array_indexes_repeat1,
  [aux_sym_stats_repeat1] = aux_sym_stats_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_chr] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_fst] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_len] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [sym_ord] = {
    .visible = true,
    .named = true,
  },
  [sym_snd] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_op_bang] = {
    .visible = true,
    .named = true,
  },
  [sym_op_asterix] = {
    .visible = true,
    .named = true,
  },
  [sym_op_slash] = {
    .visible = true,
    .named = true,
  },
  [sym_op_percent] = {
    .visible = true,
    .named = true,
  },
  [sym_op_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_op_dash] = {
    .visible = true,
    .named = true,
  },
  [sym_op_gt] = {
    .visible = true,
    .named = true,
  },
  [sym_op_ge] = {
    .visible = true,
    .named = true,
  },
  [sym_op_lt] = {
    .visible = true,
    .named = true,
  },
  [sym_op_le] = {
    .visible = true,
    .named = true,
  },
  [sym_op_eq] = {
    .visible = true,
    .named = true,
  },
  [sym_op_ne] = {
    .visible = true,
    .named = true,
  },
  [sym_op_and] = {
    .visible = true,
    .named = true,
  },
  [sym_op_or] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pair] = {
    .visible = true,
    .named = false,
  },
  [sym_int_liter] = {
    .visible = true,
    .named = true,
  },
  [sym_char_liter] = {
    .visible = true,
    .named = true,
  },
  [sym_str_liter] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_newpair] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_skip_stat] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_free] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_println] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_done] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_param_list] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_base_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pair_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pair_elem_type] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_pair_type] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_array_liter] = {
    .visible = true,
    .named = true,
  },
  [sym_array_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_array_indexes] = {
    .visible = true,
    .named = true,
  },
  [sym_lvalue] = {
    .visible = true,
    .named = true,
  },
  [sym_rvalue] = {
    .visible = true,
    .named = true,
  },
  [sym_newpair] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_pair_elem] = {
    .visible = true,
    .named = true,
  },
  [sym_pair_elem_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym_stats] = {
    .visible = true,
    .named = true,
  },
  [sym_stat] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_stat] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_param_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_liter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_indexes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stats_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field___kind = 1,
  field_arg_list = 2,
  field_body = 3,
  field_decl = 4,
  field_expr = 5,
  field_fst = 6,
  field_func_name = 7,
  field_funcs = 8,
  field_ident = 9,
  field_indices = 10,
  field_inner_type = 11,
  field_lhs = 12,
  field_lvalue = 13,
  field_main = 14,
  field_name = 15,
  field_param = 16,
  field_params = 17,
  field_return_type = 18,
  field_rhs = 19,
  field_rvalue = 20,
  field_selector = 21,
  field_snd = 22,
  field_stat = 23,
  field_type = 24,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field___kind] = "__kind",
  [field_arg_list] = "arg_list",
  [field_body] = "body",
  [field_decl] = "decl",
  [field_expr] = "expr",
  [field_fst] = "fst",
  [field_func_name] = "func_name",
  [field_funcs] = "funcs",
  [field_ident] = "ident",
  [field_indices] = "indices",
  [field_inner_type] = "inner_type",
  [field_lhs] = "lhs",
  [field_lvalue] = "lvalue",
  [field_main] = "main",
  [field_name] = "name",
  [field_param] = "param",
  [field_params] = "params",
  [field_return_type] = "return_type",
  [field_rhs] = "rhs",
  [field_rvalue] = "rvalue",
  [field_selector] = "selector",
  [field_snd] = "snd",
  [field_stat] = "stat",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 3},
  [13] = {.index = 19, .length = 3},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 2},
  [18] = {.index = 30, .length = 1},
  [19] = {.index = 31, .length = 2},
  [20] = {.index = 33, .length = 1},
  [21] = {.index = 34, .length = 2},
  [22] = {.index = 36, .length = 1},
  [23] = {.index = 37, .length = 2},
  [24] = {.index = 39, .length = 2},
  [25] = {.index = 41, .length = 1},
  [26] = {.index = 42, .length = 1},
  [27] = {.index = 43, .length = 2},
  [28] = {.index = 45, .length = 2},
  [29] = {.index = 47, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field___kind, 0},
  [1] =
    {field_stat, 0},
  [2] =
    {field_main, 1},
  [3] =
    {field_stat, 0},
    {field_stat, 1, .inherited = true},
  [5] =
    {field_inner_type, 0},
  [6] =
    {field_stat, 1},
  [7] =
    {field_stat, 0, .inherited = true},
    {field_stat, 1, .inherited = true},
  [9] =
    {field_funcs, 1},
    {field_main, 2},
  [11] =
    {field_body, 2},
    {field_decl, 0},
  [13] =
    {field_name, 1},
    {field_return_type, 0},
  [15] =
    {field_param, 0},
  [16] =
    {field_ident, 1},
    {field_rvalue, 3},
    {field_type, 0},
  [19] =
    {field_name, 1},
    {field_params, 3},
    {field_return_type, 0},
  [22] =
    {field_param, 0},
    {field_param, 1, .inherited = true},
  [24] =
    {field_ident, 1},
    {field_type, 0},
  [26] =
    {field_lvalue, 1},
    {field_selector, 0},
  [28] =
    {field_lhs, 2},
    {field_rhs, 4},
  [30] =
    {field_param, 1},
  [31] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [33] =
    {field_expr, 1},
  [34] =
    {field_ident, 0},
    {field_indices, 1},
  [36] =
    {field_expr, 0, .inherited = true},
  [37] =
    {field_expr, 1},
    {field_expr, 2, .inherited = true},
  [39] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
  [41] =
    {field_func_name, 1},
  [42] =
    {field_expr, 0},
  [43] =
    {field_expr, 0},
    {field_expr, 1, .inherited = true},
  [45] =
    {field_arg_list, 3},
    {field_func_name, 1},
  [47] =
    {field_fst, 2},
    {field_snd, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
};

static inline bool sym_str_liter_character_set_1(int32_t c) {
  return (c < 'b'
    ? (c < '0'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '0' || c == '\\'))
    : (c <= 'b' || (c < 'r'
      ? (c < 'n'
        ? c == 'f'
        : c <= 'n')
      : (c <= 'r' || c == 't'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(80);
      if (lookahead == '!') ADVANCE(101);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '%') ADVANCE(104);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == ';') ADVANCE(128);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == 'w') ADVANCE(32);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(78);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= 127)) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == 's') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(86);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(113);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(119);
      END_STATE();
    case 6:
      if (lookahead == '\\') ADVANCE(79);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= '!') ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= 127)) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(47);
      if (lookahead == 'h') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 31:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 76:
      if (lookahead == 'w') ADVANCE(60);
      END_STATE();
    case 77:
      if (lookahead == '|') ADVANCE(114);
      END_STATE();
    case 78:
      if (sym_str_liter_character_set_1(lookahead)) ADVANCE(1);
      END_STATE();
    case 79:
      if (sym_str_liter_character_set_1(lookahead)) ADVANCE(5);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_chr);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_fst);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_fst);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_len);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_ord);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_snd);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_snd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_op_bang);
      if (lookahead == '=') ADVANCE(112);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_op_asterix);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_op_slash);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_op_percent);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_op_plus);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_op_dash);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_op_gt);
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_op_ge);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_op_lt);
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_op_le);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_op_eq);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_op_ne);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_op_and);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_op_or);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_pair);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_int_liter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_char_liter);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_str_liter);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_newpair);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_skip_stat);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_free);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_println);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(145);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_bool] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_chr] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_fst] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym_len] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [sym_ord] = ACTIONS(1),
    [sym_snd] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_op_bang] = ACTIONS(1),
    [sym_op_asterix] = ACTIONS(1),
    [sym_op_slash] = ACTIONS(1),
    [sym_op_percent] = ACTIONS(1),
    [sym_op_plus] = ACTIONS(1),
    [sym_op_dash] = ACTIONS(1),
    [sym_op_gt] = ACTIONS(1),
    [sym_op_ge] = ACTIONS(1),
    [sym_op_lt] = ACTIONS(1),
    [sym_op_le] = ACTIONS(1),
    [sym_op_eq] = ACTIONS(1),
    [sym_op_ne] = ACTIONS(1),
    [sym_op_and] = ACTIONS(1),
    [sym_op_or] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_pair] = ACTIONS(1),
    [sym_int_liter] = ACTIONS(1),
    [sym_char_liter] = ACTIONS(1),
    [sym_str_liter] = ACTIONS(1),
    [anon_sym_newpair] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_skip_stat] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_free] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_exit] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_println] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_fi] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_done] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [anon_sym_begin] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_pair,
    STATE(34), 1,
      sym_stat,
    STATE(48), 1,
      sym_type,
    STATE(52), 1,
      sym_decl_stat,
    STATE(65), 1,
      sym_decl,
    STATE(87), 1,
      sym_stats,
    STATE(5), 2,
      sym_func,
      aux_sym_source_file_repeat1,
    STATE(54), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [37] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_pair,
    STATE(34), 1,
      sym_stat,
    STATE(48), 1,
      sym_type,
    STATE(52), 1,
      sym_decl_stat,
    STATE(65), 1,
      sym_decl,
    STATE(82), 1,
      sym_stats,
    STATE(2), 2,
      sym_func,
      aux_sym_source_file_repeat1,
    STATE(54), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [74] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_str_liter,
    ACTIONS(17), 1,
      anon_sym_newpair,
    ACTIONS(19), 1,
      anon_sym_call,
    STATE(12), 1,
      sym_pair_elem_selector,
    STATE(51), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    STATE(50), 5,
      sym_expr,
      sym_array_liter,
      sym_newpair,
      sym_call,
      sym_pair_elem,
  [107] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(24), 1,
      anon_sym_pair,
    STATE(41), 1,
      sym_type,
    STATE(65), 1,
      sym_decl,
    STATE(5), 2,
      sym_func,
      aux_sym_source_file_repeat1,
    STATE(54), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(21), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [135] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_pair,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_param,
    STATE(45), 1,
      sym_type,
    STATE(78), 1,
      sym_param_list,
    STATE(54), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [165] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_pair,
    STATE(34), 1,
      sym_stat,
    STATE(52), 1,
      sym_decl_stat,
    STATE(55), 1,
      sym_type,
    STATE(76), 1,
      sym_stats,
    STATE(54), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [195] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_pair,
    STATE(52), 1,
      sym_decl_stat,
    STATE(55), 1,
      sym_type,
    STATE(63), 1,
      sym_stat,
    STATE(54), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [222] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_pair,
    STATE(47), 1,
      sym_raw_pair_type,
    STATE(54), 1,
      sym_pair_type,
    STATE(71), 1,
      sym_pair_elem_type,
    STATE(85), 1,
      sym_type,
    STATE(29), 2,
      sym_base_type,
      sym_array_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [251] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_pair,
    STATE(47), 1,
      sym_raw_pair_type,
    STATE(54), 1,
      sym_pair_type,
    STATE(80), 1,
      sym_pair_elem_type,
    STATE(85), 1,
      sym_type,
    STATE(29), 2,
      sym_base_type,
      sym_array_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [280] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_pair,
    STATE(45), 1,
      sym_type,
    STATE(61), 1,
      sym_param,
    STATE(54), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [304] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(33), 1,
      sym_ident,
    STATE(12), 1,
      sym_pair_elem_selector,
    STATE(39), 1,
      sym_lvalue,
    ACTIONS(31), 2,
      sym_fst,
      sym_snd,
    STATE(62), 2,
      sym_array_elem,
      sym_pair_elem,
  [325] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(35), 5,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [336] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      aux_sym_array_indexes_repeat1,
    STATE(49), 1,
      sym_array_indexes,
    ACTIONS(37), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [353] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 5,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
      anon_sym_pair,
  [364] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      aux_sym_array_indexes_repeat1,
    ACTIONS(43), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [378] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(48), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_ident,
  [388] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      sym_str_liter,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_expr,
    STATE(81), 1,
      sym_arg_list,
  [404] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      aux_sym_array_indexes_repeat1,
    ACTIONS(52), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [418] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_array_liter_repeat1,
    ACTIONS(54), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [432] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(59), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_ident,
  [442] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 3,
      sym_fst,
      sym_snd,
      sym_ident,
  [451] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_param_list_repeat1,
  [464] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 3,
      anon_sym_end,
      anon_sym_LBRACK,
      anon_sym_SEMI,
  [473] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(69), 1,
      anon_sym_end,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      aux_sym_stats_repeat1,
  [486] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_array_liter_repeat1,
  [499] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [510] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_array_liter_repeat1,
  [523] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [534] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [543] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      aux_sym_array_liter_repeat1,
  [556] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_param_list_repeat1,
  [569] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_array_liter_repeat1,
  [582] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      anon_sym_end,
    STATE(25), 1,
      aux_sym_stats_repeat1,
  [595] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(100), 1,
      anon_sym_end,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      aux_sym_stats_repeat1,
  [608] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      sym_str_liter,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym_expr,
  [621] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_param_list_repeat1,
  [634] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      sym_str_liter,
    STATE(77), 1,
      sym_expr,
  [644] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(109), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [652] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [660] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      sym_ident,
  [670] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(117), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [678] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(119), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [686] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      sym_str_liter,
    STATE(84), 1,
      sym_expr,
  [696] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_ident,
  [706] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(123), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [714] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(83), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [722] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym_ident,
  [732] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(127), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [740] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(129), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [748] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(131), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [756] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(133), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [764] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    ACTIONS(137), 1,
      anon_sym_EQ,
  [774] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 2,
      anon_sym_LBRACK,
      sym_ident,
  [782] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 1,
      sym_ident,
  [792] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(141), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [800] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(143), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [808] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(145), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [816] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      sym_str_liter,
    STATE(70), 1,
      sym_expr,
  [826] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      sym_str_liter,
    STATE(30), 1,
      sym_expr,
  [836] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(147), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [844] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(37), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [852] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(149), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [860] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(151), 2,
      anon_sym_LBRACK,
      sym_ident,
  [868] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(153), 1,
      anon_sym_is,
  [875] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
  [882] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
  [889] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
  [896] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(161), 1,
      anon_sym_is,
  [903] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(163), 1,
      anon_sym_COMMA,
  [910] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
  [917] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
  [924] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      sym_ident,
  [931] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [938] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(137), 1,
      anon_sym_EQ,
  [945] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(171), 1,
      anon_sym_end,
  [952] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
  [959] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
  [966] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 1,
      anon_sym_is,
  [973] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(179), 1,
      anon_sym_COMMA,
  [980] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
  [987] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(183), 1,
      anon_sym_end,
  [994] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
  [1001] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
  [1008] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
  [1015] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
  [1022] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(189), 1,
      anon_sym_end,
  [1029] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 107,
  [SMALL_STATE(6)] = 135,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 195,
  [SMALL_STATE(9)] = 222,
  [SMALL_STATE(10)] = 251,
  [SMALL_STATE(11)] = 280,
  [SMALL_STATE(12)] = 304,
  [SMALL_STATE(13)] = 325,
  [SMALL_STATE(14)] = 336,
  [SMALL_STATE(15)] = 353,
  [SMALL_STATE(16)] = 364,
  [SMALL_STATE(17)] = 378,
  [SMALL_STATE(18)] = 388,
  [SMALL_STATE(19)] = 404,
  [SMALL_STATE(20)] = 418,
  [SMALL_STATE(21)] = 432,
  [SMALL_STATE(22)] = 442,
  [SMALL_STATE(23)] = 451,
  [SMALL_STATE(24)] = 464,
  [SMALL_STATE(25)] = 473,
  [SMALL_STATE(26)] = 486,
  [SMALL_STATE(27)] = 499,
  [SMALL_STATE(28)] = 510,
  [SMALL_STATE(29)] = 523,
  [SMALL_STATE(30)] = 534,
  [SMALL_STATE(31)] = 543,
  [SMALL_STATE(32)] = 556,
  [SMALL_STATE(33)] = 569,
  [SMALL_STATE(34)] = 582,
  [SMALL_STATE(35)] = 595,
  [SMALL_STATE(36)] = 608,
  [SMALL_STATE(37)] = 621,
  [SMALL_STATE(38)] = 634,
  [SMALL_STATE(39)] = 644,
  [SMALL_STATE(40)] = 652,
  [SMALL_STATE(41)] = 660,
  [SMALL_STATE(42)] = 670,
  [SMALL_STATE(43)] = 678,
  [SMALL_STATE(44)] = 686,
  [SMALL_STATE(45)] = 696,
  [SMALL_STATE(46)] = 706,
  [SMALL_STATE(47)] = 714,
  [SMALL_STATE(48)] = 722,
  [SMALL_STATE(49)] = 732,
  [SMALL_STATE(50)] = 740,
  [SMALL_STATE(51)] = 748,
  [SMALL_STATE(52)] = 756,
  [SMALL_STATE(53)] = 764,
  [SMALL_STATE(54)] = 774,
  [SMALL_STATE(55)] = 782,
  [SMALL_STATE(56)] = 792,
  [SMALL_STATE(57)] = 800,
  [SMALL_STATE(58)] = 808,
  [SMALL_STATE(59)] = 816,
  [SMALL_STATE(60)] = 826,
  [SMALL_STATE(61)] = 836,
  [SMALL_STATE(62)] = 844,
  [SMALL_STATE(63)] = 852,
  [SMALL_STATE(64)] = 860,
  [SMALL_STATE(65)] = 868,
  [SMALL_STATE(66)] = 875,
  [SMALL_STATE(67)] = 882,
  [SMALL_STATE(68)] = 889,
  [SMALL_STATE(69)] = 896,
  [SMALL_STATE(70)] = 903,
  [SMALL_STATE(71)] = 910,
  [SMALL_STATE(72)] = 917,
  [SMALL_STATE(73)] = 924,
  [SMALL_STATE(74)] = 931,
  [SMALL_STATE(75)] = 938,
  [SMALL_STATE(76)] = 945,
  [SMALL_STATE(77)] = 952,
  [SMALL_STATE(78)] = 959,
  [SMALL_STATE(79)] = 966,
  [SMALL_STATE(80)] = 973,
  [SMALL_STATE(81)] = 980,
  [SMALL_STATE(82)] = 987,
  [SMALL_STATE(83)] = 994,
  [SMALL_STATE(84)] = 1001,
  [SMALL_STATE(85)] = 1008,
  [SMALL_STATE(86)] = 1015,
  [SMALL_STATE(87)] = 1022,
  [SMALL_STATE(88)] = 1029,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue, 1, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_indexes_repeat1, 2, .production_id = 24),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_indexes_repeat1, 2, .production_id = 24), SHIFT_REPEAT(38),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 5),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_indexes, 1, .production_id = 22),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_liter_repeat1, 2, .production_id = 24),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_liter_repeat1, 2, .production_id = 24), SHIFT_REPEAT(60),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair_elem_selector, 1, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2, .production_id = 14),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_indexes_repeat1, 3, .production_id = 20),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stats, 2, .production_id = 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2, .production_id = 27),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_pair_type, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1, .production_id = 26),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair_elem_type, 1, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_liter_repeat1, 2, .production_id = 20),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2, .production_id = 19),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2, .production_id = 19), SHIFT_REPEAT(11),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stats, 1, .production_id = 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 7),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 7), SHIFT_REPEAT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1, .production_id = 11),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair_elem, 2, .production_id = 16),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newpair, 6, .production_id = 29),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 28),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 25),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_liter, 4, .production_id = 23),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_elem, 2, .production_id = 21),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rvalue, 1, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stat, 4, .production_id = 12),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stat, 1, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 15),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_liter, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_liter, 3, .production_id = 20),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2, .production_id = 18),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 6),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair_type, 6, .production_id = 17),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 5, .production_id = 13),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [169] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 4, .production_id = 10),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, .production_id = 8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_wacc(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
