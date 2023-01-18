#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 19

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
  sym_null = 14,
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
  sym_str_liter = 36,
  sym_ident = 37,
  anon_sym_SEMI = 38,
  anon_sym_EQ = 39,
  sym_line_comment = 40,
  sym_source_file = 41,
  sym_func = 42,
  sym_decl = 43,
  sym_param_list = 44,
  sym_param = 45,
  sym_type = 46,
  sym_base_type = 47,
  sym_array_type = 48,
  sym_pair_type = 49,
  sym_pair_elem_type = 50,
  sym_raw_pair_type = 51,
  sym_expr = 52,
  sym_stats = 53,
  sym_stat = 54,
  sym_decl_stat = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_param_list_repeat1 = 57,
  aux_sym_stats_repeat1 = 58,
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
  [sym_null] = "null",
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
  [sym_str_liter] = "str_liter",
  [sym_ident] = "ident",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
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
  [sym_stats] = "stats",
  [sym_stat] = "stat",
  [sym_decl_stat] = "decl_stat",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_param_list_repeat1] = "param_list_repeat1",
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
  [sym_null] = sym_null,
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
  [sym_str_liter] = sym_str_liter,
  [sym_ident] = sym_ident,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [sym_stats] = sym_stats,
  [sym_stat] = sym_stat,
  [sym_decl_stat] = sym_decl_stat,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_param_list_repeat1] = aux_sym_param_list_repeat1,
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
  [sym_null] = {
    .visible = true,
    .named = true,
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
  [sym_str_liter] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [aux_sym_stats_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field___kind = 1,
  field_body = 2,
  field_decl = 3,
  field_expr = 4,
  field_funcs = 5,
  field_ident = 6,
  field_inner_type = 7,
  field_lhs = 8,
  field_main = 9,
  field_name = 10,
  field_param = 11,
  field_params = 12,
  field_return_type = 13,
  field_rhs = 14,
  field_stat = 15,
  field_type = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field___kind] = "__kind",
  [field_body] = "body",
  [field_decl] = "decl",
  [field_expr] = "expr",
  [field_funcs] = "funcs",
  [field_ident] = "ident",
  [field_inner_type] = "inner_type",
  [field_lhs] = "lhs",
  [field_main] = "main",
  [field_name] = "name",
  [field_param] = "param",
  [field_params] = "params",
  [field_return_type] = "return_type",
  [field_rhs] = "rhs",
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
  [17] = {.index = 28, .length = 1},
  [18] = {.index = 29, .length = 2},
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
    {field_expr, 3},
    {field_ident, 1},
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
    {field_lhs, 2},
    {field_rhs, 4},
  [28] =
    {field_param, 1},
  [29] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
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
      if (eof) ADVANCE(43);
      if (lookahead == '!') ADVANCE(62);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '%') ADVANCE(65);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(68);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(42);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= 127)) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(6);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == '|') ADVANCE(75);
      END_STATE();
    case 42:
      if (sym_str_liter_character_set_1(lookahead)) ADVANCE(1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_chr);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_fst);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_len);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_ord);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_snd);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_op_bang);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_op_asterix);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_op_slash);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_op_percent);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_op_plus);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_op_dash);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_op_gt);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_op_ge);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_op_lt);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_op_le);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_op_eq);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_op_ne);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_op_and);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_op_or);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_pair);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_str_liter);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      if (lookahead != 0) ADVANCE(85);
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
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
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
    [sym_null] = ACTIONS(1),
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
    [sym_str_liter] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(43),
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
    STATE(17), 1,
      sym_stat,
    STATE(28), 1,
      sym_type,
    STATE(36), 1,
      sym_decl_stat,
    STATE(38), 1,
      sym_stats,
    STATE(49), 1,
      sym_decl,
    STATE(3), 2,
      sym_func,
      aux_sym_source_file_repeat1,
    STATE(34), 3,
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
    STATE(17), 1,
      sym_stat,
    STATE(28), 1,
      sym_type,
    STATE(36), 1,
      sym_decl_stat,
    STATE(49), 1,
      sym_decl,
    STATE(52), 1,
      sym_stats,
    STATE(5), 2,
      sym_func,
      aux_sym_source_file_repeat1,
    STATE(34), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [74] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_pair,
    STATE(17), 1,
      sym_stat,
    STATE(22), 1,
      sym_type,
    STATE(36), 1,
      sym_decl_stat,
    STATE(48), 1,
      sym_stats,
    STATE(34), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [104] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(14), 1,
      anon_sym_pair,
    STATE(35), 1,
      sym_type,
    STATE(49), 1,
      sym_decl,
    STATE(5), 2,
      sym_func,
      aux_sym_source_file_repeat1,
    STATE(34), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(11), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [132] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_pair,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_param,
    STATE(33), 1,
      sym_type,
    STATE(40), 1,
      sym_param_list,
    STATE(34), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [162] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_pair,
    STATE(22), 1,
      sym_type,
    STATE(32), 1,
      sym_stat,
    STATE(36), 1,
      sym_decl_stat,
    STATE(34), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [189] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_pair,
    STATE(27), 1,
      sym_raw_pair_type,
    STATE(34), 1,
      sym_pair_type,
    STATE(46), 1,
      sym_pair_elem_type,
    STATE(51), 1,
      sym_type,
    STATE(20), 2,
      sym_base_type,
      sym_array_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [218] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(19), 1,
      anon_sym_pair,
    STATE(27), 1,
      sym_raw_pair_type,
    STATE(34), 1,
      sym_pair_type,
    STATE(50), 1,
      sym_pair_elem_type,
    STATE(51), 1,
      sym_type,
    STATE(20), 2,
      sym_base_type,
      sym_array_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [247] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_pair,
    STATE(24), 1,
      sym_param,
    STATE(33), 1,
      sym_type,
    STATE(34), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [271] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(21), 5,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
      anon_sym_pair,
  [282] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(23), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_ident,
  [292] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(25), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      sym_ident,
  [302] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_param_list_repeat1,
  [315] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_param_list_repeat1,
  [328] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(36), 1,
      anon_sym_end,
    ACTIONS(38), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      aux_sym_stats_repeat1,
  [341] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(41), 1,
      anon_sym_end,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      aux_sym_stats_repeat1,
  [354] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_param_list_repeat1,
  [367] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(43), 1,
      anon_sym_SEMI,
    ACTIONS(47), 1,
      anon_sym_end,
    STATE(16), 1,
      aux_sym_stats_repeat1,
  [380] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [391] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [402] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(59), 1,
      sym_ident,
  [412] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(61), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [420] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(63), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [428] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(65), 2,
      anon_sym_LBRACK,
      sym_ident,
  [436] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(67), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [444] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(49), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [452] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym_ident,
  [462] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(71), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [470] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_EQ,
  [480] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(77), 1,
      sym_str_liter,
    STATE(23), 1,
      sym_expr,
  [490] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(79), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [498] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym_ident,
  [508] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(51), 2,
      anon_sym_LBRACK,
      sym_ident,
  [516] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      sym_ident,
  [526] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(85), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [534] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(75), 1,
      anon_sym_EQ,
  [541] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(87), 1,
      anon_sym_end,
  [548] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(89), 1,
      anon_sym_is,
  [555] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
  [562] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
  [569] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
  [576] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [583] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
  [590] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
  [597] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
  [604] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(103), 1,
      anon_sym_is,
  [611] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(105), 1,
      anon_sym_end,
  [618] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(107), 1,
      anon_sym_is,
  [625] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(109), 1,
      anon_sym_COMMA,
  [632] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
  [639] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(111), 1,
      anon_sym_end,
  [646] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 162,
  [SMALL_STATE(8)] = 189,
  [SMALL_STATE(9)] = 218,
  [SMALL_STATE(10)] = 247,
  [SMALL_STATE(11)] = 271,
  [SMALL_STATE(12)] = 282,
  [SMALL_STATE(13)] = 292,
  [SMALL_STATE(14)] = 302,
  [SMALL_STATE(15)] = 315,
  [SMALL_STATE(16)] = 328,
  [SMALL_STATE(17)] = 341,
  [SMALL_STATE(18)] = 354,
  [SMALL_STATE(19)] = 367,
  [SMALL_STATE(20)] = 380,
  [SMALL_STATE(21)] = 391,
  [SMALL_STATE(22)] = 402,
  [SMALL_STATE(23)] = 412,
  [SMALL_STATE(24)] = 420,
  [SMALL_STATE(25)] = 428,
  [SMALL_STATE(26)] = 436,
  [SMALL_STATE(27)] = 444,
  [SMALL_STATE(28)] = 452,
  [SMALL_STATE(29)] = 462,
  [SMALL_STATE(30)] = 470,
  [SMALL_STATE(31)] = 480,
  [SMALL_STATE(32)] = 490,
  [SMALL_STATE(33)] = 498,
  [SMALL_STATE(34)] = 508,
  [SMALL_STATE(35)] = 516,
  [SMALL_STATE(36)] = 526,
  [SMALL_STATE(37)] = 534,
  [SMALL_STATE(38)] = 541,
  [SMALL_STATE(39)] = 548,
  [SMALL_STATE(40)] = 555,
  [SMALL_STATE(41)] = 562,
  [SMALL_STATE(42)] = 569,
  [SMALL_STATE(43)] = 576,
  [SMALL_STATE(44)] = 583,
  [SMALL_STATE(45)] = 590,
  [SMALL_STATE(46)] = 597,
  [SMALL_STATE(47)] = 604,
  [SMALL_STATE(48)] = 611,
  [SMALL_STATE(49)] = 618,
  [SMALL_STATE(50)] = 625,
  [SMALL_STATE(51)] = 632,
  [SMALL_STATE(52)] = 639,
  [SMALL_STATE(53)] = 646,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 9),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 2, .production_id = 14),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2, .production_id = 18),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2, .production_id = 18), SHIFT_REPEAT(10),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 7),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 7), SHIFT_REPEAT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stats, 1, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_list, 1, .production_id = 11),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stats, 2, .production_id = 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair_elem_type, 1, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_pair_type, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stat, 4, .production_id = 12),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_param_list_repeat1, 2, .production_id = 17),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair_type, 6, .production_id = 16),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 2, .production_id = 15),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 6),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stat, 1, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 4, .production_id = 10),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, .production_id = 8),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 5, .production_id = 13),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
