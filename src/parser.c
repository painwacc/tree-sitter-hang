#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 191
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 29
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 37

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
  sym_bool_liter = 71,
  sym_array_liter = 72,
  sym_array_elem = 73,
  sym_array_indexes = 74,
  sym_pair_null = 75,
  sym_unary_op = 76,
  sym_unary_expr = 77,
  sym_binary_expr = 78,
  sym_bracket_expr = 79,
  sym_lvalue = 80,
  sym_rvalue = 81,
  sym_newpair = 82,
  sym_call = 83,
  sym_pair_elem = 84,
  sym_pair_elem_selector = 85,
  sym_arg_list = 86,
  sym_stats = 87,
  sym_stat = 88,
  sym_decl_stat = 89,
  sym_assign_stat = 90,
  sym_read_stat = 91,
  sym_free_stat = 92,
  sym_return_stat = 93,
  sym_exit_stat = 94,
  sym_print_stat = 95,
  sym_println_stat = 96,
  sym_if_stat = 97,
  sym_while_stat = 98,
  sym_block_stat = 99,
  aux_sym_source_file_repeat1 = 100,
  aux_sym_param_list_repeat1 = 101,
  aux_sym_array_liter_repeat1 = 102,
  aux_sym_array_indexes_repeat1 = 103,
  aux_sym_stats_repeat1 = 104,
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
  [sym_bool_liter] = "bool_liter",
  [sym_array_liter] = "array_liter",
  [sym_array_elem] = "array_elem",
  [sym_array_indexes] = "array_indexes",
  [sym_pair_null] = "pair_null",
  [sym_unary_op] = "unary_op",
  [sym_unary_expr] = "unary_expr",
  [sym_binary_expr] = "binary_expr",
  [sym_bracket_expr] = "bracket_expr",
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
  [sym_assign_stat] = "assign_stat",
  [sym_read_stat] = "read_stat",
  [sym_free_stat] = "free_stat",
  [sym_return_stat] = "return_stat",
  [sym_exit_stat] = "exit_stat",
  [sym_print_stat] = "print_stat",
  [sym_println_stat] = "println_stat",
  [sym_if_stat] = "if_stat",
  [sym_while_stat] = "while_stat",
  [sym_block_stat] = "block_stat",
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
  [sym_bool_liter] = sym_bool_liter,
  [sym_array_liter] = sym_array_liter,
  [sym_array_elem] = sym_array_elem,
  [sym_array_indexes] = sym_array_indexes,
  [sym_pair_null] = sym_pair_null,
  [sym_unary_op] = sym_unary_op,
  [sym_unary_expr] = sym_unary_expr,
  [sym_binary_expr] = sym_binary_expr,
  [sym_bracket_expr] = sym_bracket_expr,
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
  [sym_assign_stat] = sym_assign_stat,
  [sym_read_stat] = sym_read_stat,
  [sym_free_stat] = sym_free_stat,
  [sym_return_stat] = sym_return_stat,
  [sym_exit_stat] = sym_exit_stat,
  [sym_print_stat] = sym_print_stat,
  [sym_println_stat] = sym_println_stat,
  [sym_if_stat] = sym_if_stat,
  [sym_while_stat] = sym_while_stat,
  [sym_block_stat] = sym_block_stat,
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
  [sym_bool_liter] = {
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
  [sym_pair_null] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_expr] = {
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
  [sym_assign_stat] = {
    .visible = true,
    .named = true,
  },
  [sym_read_stat] = {
    .visible = true,
    .named = true,
  },
  [sym_free_stat] = {
    .visible = true,
    .named = true,
  },
  [sym_return_stat] = {
    .visible = true,
    .named = true,
  },
  [sym_exit_stat] = {
    .visible = true,
    .named = true,
  },
  [sym_print_stat] = {
    .visible = true,
    .named = true,
  },
  [sym_println_stat] = {
    .visible = true,
    .named = true,
  },
  [sym_if_stat] = {
    .visible = true,
    .named = true,
  },
  [sym_while_stat] = {
    .visible = true,
    .named = true,
  },
  [sym_block_stat] = {
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
  field_cond = 4,
  field_decl = 5,
  field_expr = 6,
  field_fst = 7,
  field_func_name = 8,
  field_funcs = 9,
  field_ident = 10,
  field_indices = 11,
  field_inner_type = 12,
  field_lhs = 13,
  field_lvalue = 14,
  field_main = 15,
  field_name = 16,
  field_op = 17,
  field_param = 18,
  field_params = 19,
  field_return_type = 20,
  field_rhs = 21,
  field_rvalue = 22,
  field_selector = 23,
  field_snd = 24,
  field_stat = 25,
  field_stats = 26,
  field_type = 27,
  field_unless = 28,
  field_when = 29,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field___kind] = "__kind",
  [field_arg_list] = "arg_list",
  [field_body] = "body",
  [field_cond] = "cond",
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
  [field_op] = "op",
  [field_param] = "param",
  [field_params] = "params",
  [field_return_type] = "return_type",
  [field_rhs] = "rhs",
  [field_rvalue] = "rvalue",
  [field_selector] = "selector",
  [field_snd] = "snd",
  [field_stat] = "stat",
  [field_stats] = "stats",
  [field_type] = "type",
  [field_unless] = "unless",
  [field_when] = "when",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 1},
  [16] = {.index = 21, .length = 2},
  [17] = {.index = 23, .length = 2},
  [18] = {.index = 25, .length = 3},
  [19] = {.index = 28, .length = 2},
  [20] = {.index = 30, .length = 2},
  [21] = {.index = 32, .length = 1},
  [22] = {.index = 33, .length = 3},
  [23] = {.index = 36, .length = 2},
  [24] = {.index = 38, .length = 3},
  [25] = {.index = 41, .length = 2},
  [26] = {.index = 43, .length = 2},
  [27] = {.index = 45, .length = 2},
  [28] = {.index = 47, .length = 1},
  [29] = {.index = 48, .length = 2},
  [30] = {.index = 50, .length = 2},
  [31] = {.index = 52, .length = 1},
  [32] = {.index = 53, .length = 1},
  [33] = {.index = 54, .length = 3},
  [34] = {.index = 57, .length = 2},
  [35] = {.index = 59, .length = 2},
  [36] = {.index = 61, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field___kind, 0},
  [1] =
    {field_stat, 0},
  [2] =
    {field_ident, 0},
    {field_indices, 1},
  [4] =
    {field_expr, 0, .inherited = true},
  [5] =
    {field_lvalue, 1},
  [6] =
    {field_expr, 1},
  [7] =
    {field_lvalue, 1},
    {field_selector, 0},
  [9] =
    {field_main, 1},
  [10] =
    {field_stat, 0},
    {field_stat, 1, .inherited = true},
  [12] =
    {field_stats, 1},
  [13] =
    {field_expr, 0, .inherited = true},
    {field_expr, 1, .inherited = true},
  [15] =
    {field_expr, 1},
    {field_op, 0},
  [17] =
    {field_inner_type, 0},
  [18] =
    {field_lvalue, 0},
    {field_rvalue, 2},
  [20] =
    {field_stat, 1},
  [21] =
    {field_stat, 0, .inherited = true},
    {field_stat, 1, .inherited = true},
  [23] =
    {field_funcs, 1},
    {field_main, 2},
  [25] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
  [28] =
    {field_body, 2},
    {field_decl, 0},
  [30] =
    {field_name, 1},
    {field_return_type, 0},
  [32] =
    {field_param, 0},
  [33] =
    {field_ident, 1},
    {field_rvalue, 3},
    {field_type, 0},
  [36] =
    {field_body, 3},
    {field_cond, 1},
  [38] =
    {field_name, 1},
    {field_params, 3},
    {field_return_type, 0},
  [41] =
    {field_param, 0},
    {field_param, 1, .inherited = true},
  [43] =
    {field_ident, 1},
    {field_type, 0},
  [45] =
    {field_lhs, 2},
    {field_rhs, 4},
  [47] =
    {field_param, 1},
  [48] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [50] =
    {field_expr, 1},
    {field_expr, 2, .inherited = true},
  [52] =
    {field_func_name, 1},
  [53] =
    {field_expr, 0},
  [54] =
    {field_cond, 1},
    {field_unless, 5},
    {field_when, 3},
  [57] =
    {field_expr, 0},
    {field_expr, 1, .inherited = true},
  [59] =
    {field_arg_list, 3},
    {field_func_name, 1},
  [61] =
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
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 12,
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
  [37] = 36,
  [38] = 34,
  [39] = 39,
  [40] = 35,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 39,
  [48] = 48,
  [49] = 44,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 54,
  [55] = 55,
  [56] = 52,
  [57] = 54,
  [58] = 58,
  [59] = 48,
  [60] = 45,
  [61] = 61,
  [62] = 62,
  [63] = 41,
  [64] = 42,
  [65] = 43,
  [66] = 46,
  [67] = 67,
  [68] = 16,
  [69] = 15,
  [70] = 70,
  [71] = 17,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 19,
  [79] = 79,
  [80] = 80,
  [81] = 21,
  [82] = 26,
  [83] = 28,
  [84] = 30,
  [85] = 33,
  [86] = 32,
  [87] = 70,
  [88] = 72,
  [89] = 73,
  [90] = 74,
  [91] = 75,
  [92] = 76,
  [93] = 29,
  [94] = 31,
  [95] = 22,
  [96] = 23,
  [97] = 25,
  [98] = 24,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 102,
  [104] = 100,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 113,
  [115] = 115,
  [116] = 115,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 112,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 126,
  [143] = 122,
  [144] = 125,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 152,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 173,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 182,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
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
      if (eof) ADVANCE(95);
      if (lookahead == '!') ADVANCE(128);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(230);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'w') ADVANCE(41);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(230);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(160);
      if (lookahead == 'c') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'f') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == 'w') ADVANCE(173);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(11);
      if (lookahead == '*') ADVANCE(129);
      if (lookahead == '+') ADVANCE(132);
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '/') ADVANCE(130);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == '<') ADVANCE(137);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(135);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(127);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == ']') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(127);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(92);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= 127)) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == ';') ADVANCE(226);
      if (lookahead == '=') ADVANCE(229);
      if (lookahead == '[') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(253);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead == 's') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(141);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(148);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(139);
      END_STATE();
    case 15:
      if (lookahead == '\\') ADVANCE(93);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= '!') ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= 127)) ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'k') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(222);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(237);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 90:
      if (lookahead == 'w') ADVANCE(74);
      END_STATE();
    case 91:
      if (lookahead == '|') ADVANCE(142);
      END_STATE();
    case 92:
      if (sym_str_liter_character_set_1(lookahead)) ADVANCE(7);
      END_STATE();
    case 93:
      if (sym_str_liter_character_set_1(lookahead)) ADVANCE(12);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_chr);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_chr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_fst);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_fst);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_len);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_len);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_ord);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_ord);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_snd);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_snd);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_op_bang);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_op_bang);
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_op_asterix);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_op_slash);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_op_percent);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_op_plus);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_op_dash);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_op_dash);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_op_gt);
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_op_ge);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_op_lt);
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_op_le);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_op_eq);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_op_ne);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_op_and);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_op_or);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_pair);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_pair);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_int_liter);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_char_liter);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_str_liter);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 't') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'h') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 's') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'u') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'g') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 't') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 's') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'w') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_newpair);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_newpair);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_skip_stat);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_skip_stat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(139);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_read);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_read);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_free);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_free);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_exit);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_exit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_println);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_println);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_fi);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(252);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 8},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
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
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(171),
    [anon_sym_begin] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_begin,
    ACTIONS(13), 1,
      anon_sym_pair,
    ACTIONS(15), 1,
      sym_ident,
    ACTIONS(17), 1,
      sym_skip_stat,
    ACTIONS(19), 1,
      anon_sym_read,
    ACTIONS(21), 1,
      anon_sym_free,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_exit,
    ACTIONS(27), 1,
      anon_sym_print,
    ACTIONS(29), 1,
      anon_sym_println,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    STATE(116), 1,
      sym_pair_elem_selector,
    STATE(122), 1,
      sym_stat,
    STATE(160), 1,
      sym_type,
    STATE(170), 1,
      sym_decl,
    STATE(172), 1,
      sym_stats,
    STATE(173), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    STATE(18), 2,
      sym_func,
      aux_sym_source_file_repeat1,
    STATE(117), 2,
      sym_array_elem,
      sym_pair_elem,
    STATE(159), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(9), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
    STATE(129), 11,
      sym_decl_stat,
      sym_assign_stat,
      sym_read_stat,
      sym_free_stat,
      sym_return_stat,
      sym_exit_stat,
      sym_print_stat,
      sym_println_stat,
      sym_if_stat,
      sym_while_stat,
      sym_block_stat,
  [94] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_begin,
    ACTIONS(13), 1,
      anon_sym_pair,
    ACTIONS(15), 1,
      sym_ident,
    ACTIONS(17), 1,
      sym_skip_stat,
    ACTIONS(19), 1,
      anon_sym_read,
    ACTIONS(21), 1,
      anon_sym_free,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_exit,
    ACTIONS(27), 1,
      anon_sym_print,
    ACTIONS(29), 1,
      anon_sym_println,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    STATE(116), 1,
      sym_pair_elem_selector,
    STATE(122), 1,
      sym_stat,
    STATE(160), 1,
      sym_type,
    STATE(163), 1,
      sym_stats,
    STATE(170), 1,
      sym_decl,
    STATE(173), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    STATE(2), 2,
      sym_func,
      aux_sym_source_file_repeat1,
    STATE(117), 2,
      sym_array_elem,
      sym_pair_elem,
    STATE(159), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(9), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
    STATE(129), 11,
      sym_decl_stat,
      sym_assign_stat,
      sym_read_stat,
      sym_free_stat,
      sym_return_stat,
      sym_exit_stat,
      sym_print_stat,
      sym_println_stat,
      sym_if_stat,
      sym_while_stat,
      sym_block_stat,
  [188] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_begin,
    ACTIONS(13), 1,
      anon_sym_pair,
    ACTIONS(15), 1,
      sym_ident,
    ACTIONS(17), 1,
      sym_skip_stat,
    ACTIONS(19), 1,
      anon_sym_read,
    ACTIONS(21), 1,
      anon_sym_free,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_exit,
    ACTIONS(27), 1,
      anon_sym_print,
    ACTIONS(29), 1,
      anon_sym_println,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    STATE(116), 1,
      sym_pair_elem_selector,
    STATE(122), 1,
      sym_stat,
    STATE(154), 1,
      sym_type,
    STATE(165), 1,
      sym_stats,
    STATE(173), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    STATE(117), 2,
      sym_array_elem,
      sym_pair_elem,
    STATE(159), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(9), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
    STATE(129), 11,
      sym_decl_stat,
      sym_assign_stat,
      sym_read_stat,
      sym_free_stat,
      sym_return_stat,
      sym_exit_stat,
      sym_print_stat,
      sym_println_stat,
      sym_if_stat,
      sym_while_stat,
      sym_block_stat,
  [275] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_begin,
    ACTIONS(13), 1,
      anon_sym_pair,
    ACTIONS(15), 1,
      sym_ident,
    ACTIONS(17), 1,
      sym_skip_stat,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_read,
    ACTIONS(37), 1,
      anon_sym_free,
    ACTIONS(39), 1,
      anon_sym_return,
    ACTIONS(41), 1,
      anon_sym_exit,
    ACTIONS(43), 1,
      anon_sym_print,
    ACTIONS(45), 1,
      anon_sym_println,
    STATE(116), 1,
      sym_pair_elem_selector,
    STATE(143), 1,
      sym_stat,
    STATE(152), 1,
      sym_type,
    STATE(164), 1,
      sym_stats,
    STATE(174), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    STATE(117), 2,
      sym_array_elem,
      sym_pair_elem,
    STATE(159), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(9), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
    STATE(129), 11,
      sym_decl_stat,
      sym_assign_stat,
      sym_read_stat,
      sym_free_stat,
      sym_return_stat,
      sym_exit_stat,
      sym_print_stat,
      sym_println_stat,
      sym_if_stat,
      sym_while_stat,
      sym_block_stat,
  [362] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_begin,
    ACTIONS(13), 1,
      anon_sym_pair,
    ACTIONS(15), 1,
      sym_ident,
    ACTIONS(17), 1,
      sym_skip_stat,
    ACTIONS(19), 1,
      anon_sym_read,
    ACTIONS(21), 1,
      anon_sym_free,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_exit,
    ACTIONS(27), 1,
      anon_sym_print,
    ACTIONS(29), 1,
      anon_sym_println,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    STATE(116), 1,
      sym_pair_elem_selector,
    STATE(122), 1,
      sym_stat,
    STATE(154), 1,
      sym_type,
    STATE(173), 1,
      sym_lvalue,
    STATE(176), 1,
      sym_stats,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    STATE(117), 2,
      sym_array_elem,
      sym_pair_elem,
    STATE(159), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(9), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
    STATE(129), 11,
      sym_decl_stat,
      sym_assign_stat,
      sym_read_stat,
      sym_free_stat,
      sym_return_stat,
      sym_exit_stat,
      sym_print_stat,
      sym_println_stat,
      sym_if_stat,
      sym_while_stat,
      sym_block_stat,
  [449] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_begin,
    ACTIONS(13), 1,
      anon_sym_pair,
    ACTIONS(15), 1,
      sym_ident,
    ACTIONS(17), 1,
      sym_skip_stat,
    ACTIONS(19), 1,
      anon_sym_read,
    ACTIONS(21), 1,
      anon_sym_free,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_exit,
    ACTIONS(27), 1,
      anon_sym_print,
    ACTIONS(29), 1,
      anon_sym_println,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    STATE(116), 1,
      sym_pair_elem_selector,
    STATE(122), 1,
      sym_stat,
    STATE(154), 1,
      sym_type,
    STATE(173), 1,
      sym_lvalue,
    STATE(187), 1,
      sym_stats,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    STATE(117), 2,
      sym_array_elem,
      sym_pair_elem,
    STATE(159), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(9), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
    STATE(129), 11,
      sym_decl_stat,
      sym_assign_stat,
      sym_read_stat,
      sym_free_stat,
      sym_return_stat,
      sym_exit_stat,
      sym_print_stat,
      sym_println_stat,
      sym_if_stat,
      sym_while_stat,
      sym_block_stat,
  [536] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_begin,
    ACTIONS(13), 1,
      anon_sym_pair,
    ACTIONS(15), 1,
      sym_ident,
    ACTIONS(17), 1,
      sym_skip_stat,
    ACTIONS(19), 1,
      anon_sym_read,
    ACTIONS(21), 1,
      anon_sym_free,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_exit,
    ACTIONS(27), 1,
      anon_sym_print,
    ACTIONS(29), 1,
      anon_sym_println,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    STATE(116), 1,
      sym_pair_elem_selector,
    STATE(122), 1,
      sym_stat,
    STATE(154), 1,
      sym_type,
    STATE(173), 1,
      sym_lvalue,
    STATE(190), 1,
      sym_stats,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    STATE(117), 2,
      sym_array_elem,
      sym_pair_elem,
    STATE(159), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(9), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
    STATE(129), 11,
      sym_decl_stat,
      sym_assign_stat,
      sym_read_stat,
      sym_free_stat,
      sym_return_stat,
      sym_exit_stat,
      sym_print_stat,
      sym_println_stat,
      sym_if_stat,
      sym_while_stat,
      sym_block_stat,
  [623] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_begin,
    ACTIONS(13), 1,
      anon_sym_pair,
    ACTIONS(15), 1,
      sym_ident,
    ACTIONS(17), 1,
      sym_skip_stat,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_read,
    ACTIONS(37), 1,
      anon_sym_free,
    ACTIONS(39), 1,
      anon_sym_return,
    ACTIONS(41), 1,
      anon_sym_exit,
    ACTIONS(43), 1,
      anon_sym_print,
    ACTIONS(45), 1,
      anon_sym_println,
    STATE(116), 1,
      sym_pair_elem_selector,
    STATE(127), 1,
      sym_stat,
    STATE(152), 1,
      sym_type,
    STATE(174), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    STATE(117), 2,
      sym_array_elem,
      sym_pair_elem,
    STATE(159), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(9), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
    STATE(129), 11,
      sym_decl_stat,
      sym_assign_stat,
      sym_read_stat,
      sym_free_stat,
      sym_return_stat,
      sym_exit_stat,
      sym_print_stat,
      sym_println_stat,
      sym_if_stat,
      sym_while_stat,
      sym_block_stat,
  [707] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      anon_sym_begin,
    ACTIONS(13), 1,
      anon_sym_pair,
    ACTIONS(15), 1,
      sym_ident,
    ACTIONS(17), 1,
      sym_skip_stat,
    ACTIONS(19), 1,
      anon_sym_read,
    ACTIONS(21), 1,
      anon_sym_free,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_exit,
    ACTIONS(27), 1,
      anon_sym_print,
    ACTIONS(29), 1,
      anon_sym_println,
    ACTIONS(31), 1,
      anon_sym_if,
    ACTIONS(33), 1,
      anon_sym_while,
    STATE(116), 1,
      sym_pair_elem_selector,
    STATE(127), 1,
      sym_stat,
    STATE(154), 1,
      sym_type,
    STATE(173), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    STATE(117), 2,
      sym_array_elem,
      sym_pair_elem,
    STATE(159), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(9), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
    STATE(129), 11,
      sym_decl_stat,
      sym_assign_stat,
      sym_read_stat,
      sym_free_stat,
      sym_return_stat,
      sym_exit_stat,
      sym_print_stat,
      sym_println_stat,
      sym_if_stat,
      sym_while_stat,
      sym_block_stat,
  [791] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_null,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_ident,
    ACTIONS(63), 1,
      anon_sym_newpair,
    ACTIONS(65), 1,
      anon_sym_call,
    STATE(38), 1,
      sym_unary_op,
    STATE(87), 1,
      sym_expr,
    STATE(115), 1,
      sym_pair_elem_selector,
    STATE(128), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    ACTIONS(51), 2,
      sym_false,
      sym_true,
    ACTIONS(59), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(120), 4,
      sym_array_liter,
      sym_newpair,
      sym_call,
      sym_pair_elem,
    STATE(85), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [861] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_newpair,
    ACTIONS(65), 1,
      anon_sym_call,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(70), 1,
      sym_expr,
    STATE(116), 1,
      sym_pair_elem_selector,
    STATE(130), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(120), 4,
      sym_array_liter,
      sym_newpair,
      sym_call,
      sym_pair_elem,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [931] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_newpair,
    ACTIONS(65), 1,
      anon_sym_call,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(70), 1,
      sym_expr,
    STATE(116), 1,
      sym_pair_elem_selector,
    STATE(128), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(120), 4,
      sym_array_liter,
      sym_newpair,
      sym_call,
      sym_pair_elem,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [1001] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_null,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_ident,
    ACTIONS(63), 1,
      anon_sym_newpair,
    ACTIONS(65), 1,
      anon_sym_call,
    STATE(38), 1,
      sym_unary_op,
    STATE(87), 1,
      sym_expr,
    STATE(115), 1,
      sym_pair_elem_selector,
    STATE(130), 1,
      sym_rvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    ACTIONS(51), 2,
      sym_false,
      sym_true,
    ACTIONS(59), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(120), 4,
      sym_array_liter,
      sym_newpair,
      sym_call,
      sym_pair_elem,
    STATE(85), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [1071] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      aux_sym_array_indexes_repeat1,
    ACTIONS(79), 3,
      sym_op_gt,
      sym_op_lt,
      anon_sym_EQ,
    ACTIONS(77), 20,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1108] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      aux_sym_array_indexes_repeat1,
    STATE(21), 1,
      sym_array_indexes,
    ACTIONS(85), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(83), 20,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1147] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      aux_sym_array_indexes_repeat1,
    ACTIONS(89), 3,
      sym_op_gt,
      sym_op_lt,
      anon_sym_EQ,
    ACTIONS(87), 20,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1184] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(99), 1,
      anon_sym_pair,
    STATE(153), 1,
      sym_type,
    STATE(170), 1,
      sym_decl,
    STATE(18), 2,
      sym_func,
      aux_sym_source_file_repeat1,
    STATE(159), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(96), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
    ACTIONS(94), 13,
      anon_sym_begin,
      sym_fst,
      sym_snd,
      sym_ident,
      sym_skip_stat,
      anon_sym_read,
      anon_sym_free,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_print,
      anon_sym_println,
      anon_sym_if,
      anon_sym_while,
  [1227] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(104), 3,
      sym_op_gt,
      sym_op_lt,
      anon_sym_EQ,
    ACTIONS(102), 21,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1259] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_unary_op,
    STATE(80), 1,
      sym_expr,
    STATE(188), 1,
      sym_arg_list,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 3,
      sym_op_gt,
      sym_op_lt,
      anon_sym_EQ,
    ACTIONS(108), 20,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1341] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(112), 17,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1373] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(112), 15,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1407] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(112), 10,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1447] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(112), 11,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_and,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1485] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(112), 13,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1521] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_unary_op,
    STATE(77), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [1569] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(132), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(130), 20,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1599] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(136), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(134), 20,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1629] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(138), 20,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1659] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(112), 20,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1689] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(142), 20,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1719] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(83), 20,
      anon_sym_end,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_then,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_do,
  [1749] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(32), 1,
      sym_expr,
    STATE(34), 1,
      sym_unary_op,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [1794] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_null,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(61), 1,
      sym_ident,
    STATE(38), 1,
      sym_unary_op,
    STATE(96), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_false,
      sym_true,
    ACTIONS(59), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(85), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [1839] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(100), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [1884] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(104), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [1929] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_null,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(61), 1,
      sym_ident,
    STATE(38), 1,
      sym_unary_op,
    STATE(86), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_false,
      sym_true,
    ACTIONS(59), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(85), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [1974] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(103), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2019] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(23), 1,
      sym_expr,
    STATE(34), 1,
      sym_unary_op,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2064] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_null,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(61), 1,
      sym_ident,
    STATE(38), 1,
      sym_unary_op,
    STATE(88), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_false,
      sym_true,
    ACTIONS(59), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(85), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2109] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_null,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(61), 1,
      sym_ident,
    STATE(38), 1,
      sym_unary_op,
    STATE(89), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_false,
      sym_true,
    ACTIONS(59), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(85), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2154] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_null,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(61), 1,
      sym_ident,
    STATE(38), 1,
      sym_unary_op,
    STATE(90), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_false,
      sym_true,
    ACTIONS(59), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(85), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2199] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_null,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(61), 1,
      sym_ident,
    STATE(38), 1,
      sym_unary_op,
    STATE(91), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_false,
      sym_true,
    ACTIONS(59), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(85), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2244] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(76), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2289] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_null,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(61), 1,
      sym_ident,
    STATE(38), 1,
      sym_unary_op,
    STATE(94), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_false,
      sym_true,
    ACTIONS(59), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(85), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2334] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(102), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2379] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_null,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(61), 1,
      sym_ident,
    STATE(38), 1,
      sym_unary_op,
    STATE(95), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_false,
      sym_true,
    ACTIONS(59), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(85), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2424] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(75), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2469] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(106), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2514] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(26), 1,
      sym_expr,
    STATE(34), 1,
      sym_unary_op,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2559] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(24), 1,
      sym_expr,
    STATE(34), 1,
      sym_unary_op,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2604] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_null,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(61), 1,
      sym_ident,
    STATE(38), 1,
      sym_unary_op,
    STATE(82), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_false,
      sym_true,
    ACTIONS(59), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(85), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2649] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_null,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(61), 1,
      sym_ident,
    STATE(38), 1,
      sym_unary_op,
    STATE(97), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_false,
      sym_true,
    ACTIONS(59), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(85), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2694] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(79), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2739] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_null,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(61), 1,
      sym_ident,
    STATE(38), 1,
      sym_unary_op,
    STATE(98), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_false,
      sym_true,
    ACTIONS(59), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(85), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2784] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(25), 1,
      sym_expr,
    STATE(34), 1,
      sym_unary_op,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2829] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(99), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2874] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(22), 1,
      sym_expr,
    STATE(34), 1,
      sym_unary_op,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2919] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_null,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(61), 1,
      sym_ident,
    STATE(38), 1,
      sym_unary_op,
    STATE(92), 1,
      sym_expr,
    ACTIONS(51), 2,
      sym_false,
      sym_true,
    ACTIONS(59), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(85), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [2964] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(105), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [3009] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(101), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [3054] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(72), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [3099] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(73), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [3144] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(34), 1,
      sym_unary_op,
    STATE(74), 1,
      sym_expr,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [3189] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(55), 1,
      sym_op_bang,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(75), 1,
      sym_ident,
    STATE(31), 1,
      sym_expr,
    STATE(34), 1,
      sym_unary_op,
    ACTIONS(69), 2,
      sym_false,
      sym_true,
    ACTIONS(73), 3,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(49), 4,
      sym_chr,
      sym_len,
      sym_ord,
      sym_op_dash,
    STATE(33), 6,
      sym_bool_liter,
      sym_array_elem,
      sym_pair_null,
      sym_unary_expr,
      sym_binary_expr,
      sym_bracket_expr,
  [3234] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(146), 18,
      anon_sym_begin,
      sym_bool,
      sym_char,
      sym_fst,
      sym_int,
      sym_snd,
      sym_string,
      anon_sym_pair,
      sym_ident,
      sym_skip_stat,
      anon_sym_read,
      anon_sym_free,
      anon_sym_return,
      anon_sym_exit,
      anon_sym_print,
      anon_sym_println,
      anon_sym_if,
      anon_sym_while,
  [3258] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      aux_sym_array_indexes_repeat1,
    STATE(81), 1,
      sym_array_indexes,
    ACTIONS(85), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(83), 13,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
  [3290] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      aux_sym_array_indexes_repeat1,
    ACTIONS(79), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(77), 13,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
  [3319] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(150), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
  [3356] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      aux_sym_array_indexes_repeat1,
    ACTIONS(89), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(87), 13,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
  [3385] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(157), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
  [3422] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(159), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
  [3459] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(161), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
  [3496] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(163), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
  [3533] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(165), 4,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
  [3570] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      aux_sym_array_liter_repeat1,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [3610] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(104), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(102), 14,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_done,
  [3634] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(171), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3670] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_array_liter_repeat1,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [3710] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(110), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(108), 13,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
  [3733] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(179), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(181), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(175), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(112), 6,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
  [3762] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(132), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(130), 13,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
  [3785] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(140), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(138), 13,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
  [3808] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(83), 13,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
  [3831] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(144), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(142), 13,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
  [3854] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      sym_op_and,
    ACTIONS(187), 1,
      sym_op_or,
    ACTIONS(150), 2,
      anon_sym_SEMI,
      anon_sym_done,
    ACTIONS(177), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(179), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(181), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(183), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(175), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [3889] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      sym_op_and,
    ACTIONS(187), 1,
      sym_op_or,
    ACTIONS(157), 2,
      anon_sym_SEMI,
      anon_sym_done,
    ACTIONS(177), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(179), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(181), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(183), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(175), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [3924] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      sym_op_and,
    ACTIONS(187), 1,
      sym_op_or,
    ACTIONS(159), 2,
      anon_sym_SEMI,
      anon_sym_done,
    ACTIONS(177), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(179), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(181), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(183), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(175), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [3959] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      sym_op_and,
    ACTIONS(187), 1,
      sym_op_or,
    ACTIONS(161), 2,
      anon_sym_SEMI,
      anon_sym_done,
    ACTIONS(177), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(179), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(181), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(183), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(175), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [3994] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      sym_op_and,
    ACTIONS(187), 1,
      sym_op_or,
    ACTIONS(163), 2,
      anon_sym_SEMI,
      anon_sym_done,
    ACTIONS(177), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(179), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(181), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(183), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(175), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [4029] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      sym_op_and,
    ACTIONS(187), 1,
      sym_op_or,
    ACTIONS(165), 2,
      anon_sym_SEMI,
      anon_sym_done,
    ACTIONS(177), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(179), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(181), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(183), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(175), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [4064] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(136), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(134), 13,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
  [4087] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(112), 13,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
  [4110] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(175), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(112), 10,
      sym_op_plus,
      sym_op_dash,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
  [4135] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(116), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(177), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(175), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(112), 8,
      sym_op_ge,
      sym_op_le,
      sym_op_eq,
      sym_op_ne,
      sym_op_and,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
  [4162] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(177), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(179), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(181), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(183), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(175), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
    ACTIONS(112), 4,
      sym_op_and,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
  [4193] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(185), 1,
      sym_op_and,
    ACTIONS(177), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(179), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(181), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(183), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(112), 3,
      sym_op_or,
      anon_sym_SEMI,
      anon_sym_done,
    ACTIONS(175), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [4226] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [4260] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(191), 1,
      anon_sym_RBRACK,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [4294] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(193), 1,
      anon_sym_then,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [4328] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [4362] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [4396] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [4430] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(201), 1,
      anon_sym_do,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [4464] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(126), 1,
      sym_op_and,
    ACTIONS(152), 1,
      sym_op_or,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 2,
      sym_op_plus,
      sym_op_dash,
    ACTIONS(120), 2,
      sym_op_gt,
      sym_op_lt,
    ACTIONS(122), 2,
      sym_op_ge,
      sym_op_le,
    ACTIONS(124), 2,
      sym_op_eq,
      sym_op_ne,
    ACTIONS(114), 3,
      sym_op_asterix,
      sym_op_slash,
      sym_op_percent,
  [4498] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(205), 5,
      anon_sym_LPAREN,
      sym_op_bang,
      sym_int_liter,
      sym_char_liter,
      sym_str_liter,
    ACTIONS(207), 8,
      sym_chr,
      sym_false,
      sym_len,
      anon_sym_null,
      sym_ord,
      sym_true,
      sym_op_dash,
      sym_ident,
  [4519] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(213), 1,
      anon_sym_pair,
    STATE(146), 1,
      sym_param,
    STATE(158), 1,
      sym_type,
    STATE(166), 1,
      sym_param_list,
    STATE(159), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(211), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [4549] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 1,
      anon_sym_pair,
    STATE(155), 1,
      sym_raw_pair_type,
    STATE(159), 1,
      sym_pair_type,
    STATE(169), 1,
      sym_type,
    STATE(179), 1,
      sym_pair_elem_type,
    STATE(148), 2,
      sym_base_type,
      sym_array_type,
    ACTIONS(211), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [4578] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(215), 1,
      anon_sym_pair,
    STATE(155), 1,
      sym_raw_pair_type,
    STATE(159), 1,
      sym_pair_type,
    STATE(168), 1,
      sym_pair_elem_type,
    STATE(169), 1,
      sym_type,
    STATE(148), 2,
      sym_base_type,
      sym_array_type,
    ACTIONS(211), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [4607] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(213), 1,
      anon_sym_pair,
    STATE(158), 1,
      sym_type,
    STATE(161), 1,
      sym_param,
    STATE(159), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(211), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [4631] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      aux_sym_array_indexes_repeat1,
    STATE(21), 1,
      sym_array_indexes,
    ACTIONS(217), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_else,
      anon_sym_fi,
  [4651] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 1,
      sym_ident,
    STATE(115), 1,
      sym_pair_elem_selector,
    STATE(124), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    STATE(117), 2,
      sym_array_elem,
      sym_pair_elem,
  [4672] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      sym_ident,
    STATE(116), 1,
      sym_pair_elem_selector,
    STATE(124), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    STATE(117), 2,
      sym_array_elem,
      sym_pair_elem,
  [4693] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(219), 1,
      sym_ident,
    STATE(115), 1,
      sym_pair_elem_selector,
    STATE(118), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    STATE(117), 2,
      sym_array_elem,
      sym_pair_elem,
  [4714] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      sym_ident,
    STATE(116), 1,
      sym_pair_elem_selector,
    STATE(118), 1,
      sym_lvalue,
    ACTIONS(11), 2,
      sym_fst,
      sym_snd,
    STATE(117), 2,
      sym_array_elem,
      sym_pair_elem,
  [4735] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(217), 6,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4747] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(221), 6,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4759] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(223), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4770] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(150), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4781] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      aux_sym_array_indexes_repeat1,
    STATE(81), 1,
      sym_array_indexes,
    ACTIONS(217), 2,
      anon_sym_SEMI,
      anon_sym_done,
  [4798] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(227), 1,
      anon_sym_SEMI,
    STATE(125), 1,
      aux_sym_stats_repeat1,
    ACTIONS(225), 3,
      anon_sym_end,
      anon_sym_else,
      anon_sym_fi,
  [4813] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(229), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4824] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(231), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4835] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(227), 1,
      anon_sym_SEMI,
    STATE(126), 1,
      aux_sym_stats_repeat1,
    ACTIONS(233), 3,
      anon_sym_end,
      anon_sym_else,
      anon_sym_fi,
  [4850] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    STATE(126), 1,
      aux_sym_stats_repeat1,
    ACTIONS(235), 3,
      anon_sym_end,
      anon_sym_else,
      anon_sym_fi,
  [4865] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(240), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4876] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(242), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4887] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(244), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4898] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(246), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4909] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(248), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4920] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(250), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4931] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(252), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4942] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(254), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4953] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(256), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4964] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(258), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4975] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(260), 5,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_else,
      anon_sym_fi,
      anon_sym_done,
  [4986] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(262), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_ident,
  [4996] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_array_liter_repeat1,
    ACTIONS(264), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5010] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(269), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_ident,
  [5020] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_array_liter_repeat1,
  [5033] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(235), 1,
      anon_sym_done,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    STATE(142), 1,
      aux_sym_stats_repeat1,
  [5046] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(225), 1,
      anon_sym_done,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    STATE(144), 1,
      aux_sym_stats_repeat1,
  [5059] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(233), 1,
      anon_sym_done,
    ACTIONS(276), 1,
      anon_sym_SEMI,
    STATE(142), 1,
      aux_sym_stats_repeat1,
  [5072] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_param_list_repeat1,
  [5085] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_param_list_repeat1,
  [5098] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(287), 3,
      sym_fst,
      sym_snd,
      sym_ident,
  [5107] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5118] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      aux_sym_array_liter_repeat1,
  [5131] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_param_list_repeat1,
  [5144] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5155] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
      sym_ident,
  [5165] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 1,
      sym_ident,
  [5175] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    ACTIONS(307), 1,
      sym_ident,
  [5185] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(289), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5193] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(309), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5201] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(313), 1,
      anon_sym_EQ,
  [5211] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      sym_ident,
  [5221] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(291), 2,
      anon_sym_LBRACK,
      sym_ident,
  [5229] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    ACTIONS(317), 1,
      sym_ident,
  [5239] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(319), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5247] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(321), 2,
      anon_sym_LBRACK,
      sym_ident,
  [5255] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(323), 1,
      anon_sym_end,
  [5262] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(325), 1,
      anon_sym_done,
  [5269] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(327), 1,
      anon_sym_else,
  [5276] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
  [5283] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(331), 1,
      anon_sym_is,
  [5290] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
  [5297] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(301), 1,
      anon_sym_LBRACK,
  [5304] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(335), 1,
      anon_sym_is,
  [5311] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
  [5318] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(339), 1,
      anon_sym_end,
  [5325] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(341), 1,
      anon_sym_EQ,
  [5332] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(343), 1,
      anon_sym_EQ,
  [5339] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
  [5346] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(347), 1,
      anon_sym_end,
  [5353] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
  [5360] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
  [5367] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
  [5374] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(353), 1,
      sym_ident,
  [5381] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
  [5388] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(313), 1,
      anon_sym_EQ,
  [5395] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(355), 1,
      anon_sym_EQ,
  [5402] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
  [5409] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(359), 1,
      anon_sym_is,
  [5416] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(361), 1,
      anon_sym_RBRACK,
  [5423] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(363), 1,
      anon_sym_end,
  [5430] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
  [5437] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
  [5444] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(369), 1,
      anon_sym_fi,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 188,
  [SMALL_STATE(5)] = 275,
  [SMALL_STATE(6)] = 362,
  [SMALL_STATE(7)] = 449,
  [SMALL_STATE(8)] = 536,
  [SMALL_STATE(9)] = 623,
  [SMALL_STATE(10)] = 707,
  [SMALL_STATE(11)] = 791,
  [SMALL_STATE(12)] = 861,
  [SMALL_STATE(13)] = 931,
  [SMALL_STATE(14)] = 1001,
  [SMALL_STATE(15)] = 1071,
  [SMALL_STATE(16)] = 1108,
  [SMALL_STATE(17)] = 1147,
  [SMALL_STATE(18)] = 1184,
  [SMALL_STATE(19)] = 1227,
  [SMALL_STATE(20)] = 1259,
  [SMALL_STATE(21)] = 1310,
  [SMALL_STATE(22)] = 1341,
  [SMALL_STATE(23)] = 1373,
  [SMALL_STATE(24)] = 1407,
  [SMALL_STATE(25)] = 1447,
  [SMALL_STATE(26)] = 1485,
  [SMALL_STATE(27)] = 1521,
  [SMALL_STATE(28)] = 1569,
  [SMALL_STATE(29)] = 1599,
  [SMALL_STATE(30)] = 1629,
  [SMALL_STATE(31)] = 1659,
  [SMALL_STATE(32)] = 1689,
  [SMALL_STATE(33)] = 1719,
  [SMALL_STATE(34)] = 1749,
  [SMALL_STATE(35)] = 1794,
  [SMALL_STATE(36)] = 1839,
  [SMALL_STATE(37)] = 1884,
  [SMALL_STATE(38)] = 1929,
  [SMALL_STATE(39)] = 1974,
  [SMALL_STATE(40)] = 2019,
  [SMALL_STATE(41)] = 2064,
  [SMALL_STATE(42)] = 2109,
  [SMALL_STATE(43)] = 2154,
  [SMALL_STATE(44)] = 2199,
  [SMALL_STATE(45)] = 2244,
  [SMALL_STATE(46)] = 2289,
  [SMALL_STATE(47)] = 2334,
  [SMALL_STATE(48)] = 2379,
  [SMALL_STATE(49)] = 2424,
  [SMALL_STATE(50)] = 2469,
  [SMALL_STATE(51)] = 2514,
  [SMALL_STATE(52)] = 2559,
  [SMALL_STATE(53)] = 2604,
  [SMALL_STATE(54)] = 2649,
  [SMALL_STATE(55)] = 2694,
  [SMALL_STATE(56)] = 2739,
  [SMALL_STATE(57)] = 2784,
  [SMALL_STATE(58)] = 2829,
  [SMALL_STATE(59)] = 2874,
  [SMALL_STATE(60)] = 2919,
  [SMALL_STATE(61)] = 2964,
  [SMALL_STATE(62)] = 3009,
  [SMALL_STATE(63)] = 3054,
  [SMALL_STATE(64)] = 3099,
  [SMALL_STATE(65)] = 3144,
  [SMALL_STATE(66)] = 3189,
  [SMALL_STATE(67)] = 3234,
  [SMALL_STATE(68)] = 3258,
  [SMALL_STATE(69)] = 3290,
  [SMALL_STATE(70)] = 3319,
  [SMALL_STATE(71)] = 3356,
  [SMALL_STATE(72)] = 3385,
  [SMALL_STATE(73)] = 3422,
  [SMALL_STATE(74)] = 3459,
  [SMALL_STATE(75)] = 3496,
  [SMALL_STATE(76)] = 3533,
  [SMALL_STATE(77)] = 3570,
  [SMALL_STATE(78)] = 3610,
  [SMALL_STATE(79)] = 3634,
  [SMALL_STATE(80)] = 3670,
  [SMALL_STATE(81)] = 3710,
  [SMALL_STATE(82)] = 3733,
  [SMALL_STATE(83)] = 3762,
  [SMALL_STATE(84)] = 3785,
  [SMALL_STATE(85)] = 3808,
  [SMALL_STATE(86)] = 3831,
  [SMALL_STATE(87)] = 3854,
  [SMALL_STATE(88)] = 3889,
  [SMALL_STATE(89)] = 3924,
  [SMALL_STATE(90)] = 3959,
  [SMALL_STATE(91)] = 3994,
  [SMALL_STATE(92)] = 4029,
  [SMALL_STATE(93)] = 4064,
  [SMALL_STATE(94)] = 4087,
  [SMALL_STATE(95)] = 4110,
  [SMALL_STATE(96)] = 4135,
  [SMALL_STATE(97)] = 4162,
  [SMALL_STATE(98)] = 4193,
  [SMALL_STATE(99)] = 4226,
  [SMALL_STATE(100)] = 4260,
  [SMALL_STATE(101)] = 4294,
  [SMALL_STATE(102)] = 4328,
  [SMALL_STATE(103)] = 4362,
  [SMALL_STATE(104)] = 4396,
  [SMALL_STATE(105)] = 4430,
  [SMALL_STATE(106)] = 4464,
  [SMALL_STATE(107)] = 4498,
  [SMALL_STATE(108)] = 4519,
  [SMALL_STATE(109)] = 4549,
  [SMALL_STATE(110)] = 4578,
  [SMALL_STATE(111)] = 4607,
  [SMALL_STATE(112)] = 4631,
  [SMALL_STATE(113)] = 4651,
  [SMALL_STATE(114)] = 4672,
  [SMALL_STATE(115)] = 4693,
  [SMALL_STATE(116)] = 4714,
  [SMALL_STATE(117)] = 4735,
  [SMALL_STATE(118)] = 4747,
  [SMALL_STATE(119)] = 4759,
  [SMALL_STATE(120)] = 4770,
  [SMALL_STATE(121)] = 4781,
  [SMALL_STATE(122)] = 4798,
  [SMALL_STATE(123)] = 4813,
  [SMALL_STATE(124)] = 4824,
  [SMALL_STATE(125)] = 4835,
  [SMALL_STATE(126)] = 4850,
  [SMALL_STATE(127)] = 4865,
  [SMALL_STATE(128)] = 4876,
  [SMALL_STATE(129)] = 4887,
  [SMALL_STATE(130)] = 4898,
  [SMALL_STATE(131)] = 4909,
  [SMALL_STATE(132)] = 4920,
  [SMALL_STATE(133)] = 4931,
  [SMALL_STATE(134)] = 4942,
  [SMALL_STATE(135)] = 4953,
  [SMALL_STATE(136)] = 4964,
  [SMALL_STATE(137)] = 4975,
  [SMALL_STATE(138)] = 4986,
  [SMALL_STATE(139)] = 4996,
  [SMALL_STATE(140)] = 5010,
  [SMALL_STATE(141)] = 5020,
  [SMALL_STATE(142)] = 5033,
  [SMALL_STATE(143)] = 5046,
  [SMALL_STATE(144)] = 5059,
  [SMALL_STATE(145)] = 5072,
  [SMALL_STATE(146)] = 5085,
  [SMALL_STATE(147)] = 5098,
  [SMALL_STATE(148)] = 5107,
  [SMALL_STATE(149)] = 5118,
  [SMALL_STATE(150)] = 5131,
  [SMALL_STATE(151)] = 5144,
  [SMALL_STATE(152)] = 5155,
  [SMALL_STATE(153)] = 5165,
  [SMALL_STATE(154)] = 5175,
  [SMALL_STATE(155)] = 5185,
  [SMALL_STATE(156)] = 5193,
  [SMALL_STATE(157)] = 5201,
  [SMALL_STATE(158)] = 5211,
  [SMALL_STATE(159)] = 5221,
  [SMALL_STATE(160)] = 5229,
  [SMALL_STATE(161)] = 5239,
  [SMALL_STATE(162)] = 5247,
  [SMALL_STATE(163)] = 5255,
  [SMALL_STATE(164)] = 5262,
  [SMALL_STATE(165)] = 5269,
  [SMALL_STATE(166)] = 5276,
  [SMALL_STATE(167)] = 5283,
  [SMALL_STATE(168)] = 5290,
  [SMALL_STATE(169)] = 5297,
  [SMALL_STATE(170)] = 5304,
  [SMALL_STATE(171)] = 5311,
  [SMALL_STATE(172)] = 5318,
  [SMALL_STATE(173)] = 5325,
  [SMALL_STATE(174)] = 5332,
  [SMALL_STATE(175)] = 5339,
  [SMALL_STATE(176)] = 5346,
  [SMALL_STATE(177)] = 5353,
  [SMALL_STATE(178)] = 5360,
  [SMALL_STATE(179)] = 5367,
  [SMALL_STATE(180)] = 5374,
  [SMALL_STATE(181)] = 5381,
  [SMALL_STATE(182)] = 5388,
  [SMALL_STATE(183)] = 5395,
  [SMALL_STATE(184)] = 5402,
  [SMALL_STATE(185)] = 5409,
  [SMALL_STATE(186)] = 5416,
  [SMALL_STATE(187)] = 5423,
  [SMALL_STATE(188)] = 5430,
  [SMALL_STATE(189)] = 5437,
  [SMALL_STATE(190)] = 5444,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_indexes, 1, .production_id = 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_indexes, 1, .production_id = 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_indexes_repeat1, 2, .production_id = 11),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_indexes_repeat1, 2, .production_id = 11),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_indexes_repeat1, 2, .production_id = 11), SHIFT_REPEAT(37),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(181),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_indexes_repeat1, 3, .production_id = 6),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_indexes_repeat1, 3, .production_id = 6),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_elem, 2, .production_id = 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_elem, 2, .production_id = 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 18),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 18),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_liter, 1, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool_liter, 1, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expr, 3, .production_id = 6),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expr, 3, .production_id = 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair_null, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair_null, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2, .production_id = 12),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2, .production_id = 12),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 4, .production_id = 19),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rvalue, 1, .production_id = 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_indexes_repeat1, 2, .production_id = 11), SHIFT_REPEAT(36),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_println_stat, 2, .production_id = 6),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_stat, 2, .production_id = 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exit_stat, 2, .production_id = 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stat, 2, .production_id = 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_free_stat, 2, .production_id = 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_liter_repeat1, 2, .production_id = 6),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 1, .production_id = 32),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 1, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 1, .production_id = 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lvalue, 1, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair_elem, 2, .production_id = 7),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_stat, 3, .production_id = 10),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stats, 1, .production_id = 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_liter, 3, .production_id = 6),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_read_stat, 2, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stats, 2, .production_id = 9),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 16),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 16), SHIFT_REPEAT(10),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 15),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assign_stat, 3, .production_id = 14),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stat, 1, .production_id = 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stat, 4, .production_id = 22),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_liter, 4, .production_id = 30),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_stat, 5, .production_id = 23),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4, .production_id = 31),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_liter, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newpair, 6, .production_id = 36),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stat, 7, .production_id = 33),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5, .production_id = 35),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 13),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_liter_repeat1, 2, .production_id = 11),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_liter_repeat1, 2, .production_id = 11), SHIFT_REPEAT(55),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, .production_id = 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg_list, 2, .production_id = 34),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 16), SHIFT_REPEAT(9),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2, .production_id = 29),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2, .production_id = 29), SHIFT_REPEAT(111),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1, .production_id = 21),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair_elem_selector, 1, .production_id = 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair_elem_type, 1, .production_id = 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2, .production_id = 25),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_pair_type, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 26),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2, .production_id = 28),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair_type, 6, .production_id = 27),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 4, .production_id = 20),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [337] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, .production_id = 17),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 5, .production_id = 24),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 8),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
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
