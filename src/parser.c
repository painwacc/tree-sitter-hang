#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 10

enum {
  anon_sym_begin = 1,
  anon_sym_end = 2,
  sym_bool = 3,
  sym_char = 4,
  sym_chr = 5,
  sym_false = 6,
  sym_fst = 7,
  sym_int = 8,
  sym_len = 9,
  sym_null = 10,
  sym_ord = 11,
  sym_snd = 12,
  sym_string = 13,
  sym_true = 14,
  sym_op_bang = 15,
  sym_op_asterix = 16,
  sym_op_slash = 17,
  sym_op_percent = 18,
  sym_op_plus = 19,
  sym_op_dash = 20,
  sym_op_gt = 21,
  sym_op_ge = 22,
  sym_op_lt = 23,
  sym_op_le = 24,
  sym_op_eq = 25,
  sym_op_ne = 26,
  sym_op_and = 27,
  sym_op_or = 28,
  anon_sym_LBRACK = 29,
  anon_sym_RBRACK = 30,
  anon_sym_pair = 31,
  anon_sym_LPAREN = 32,
  anon_sym_COMMA = 33,
  anon_sym_RPAREN = 34,
  sym_str_liter = 35,
  sym_ident = 36,
  anon_sym_SEMI = 37,
  anon_sym_EQ = 38,
  sym_line_comment = 39,
  sym_source_file = 40,
  sym_type = 41,
  sym_base_type = 42,
  sym_array_type = 43,
  sym_pair_type = 44,
  sym_pair_elem_type = 45,
  sym_raw_pair_type = 46,
  sym_expr = 47,
  sym_stats = 48,
  sym_stat = 49,
  sym_decl_stat = 50,
  aux_sym_stats_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_str_liter] = "str_liter",
  [sym_ident] = "ident",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [sym_line_comment] = "line_comment",
  [sym_source_file] = "source_file",
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
  [aux_sym_stats_repeat1] = "stats_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_end] = anon_sym_end,
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_str_liter] = sym_str_liter,
  [sym_ident] = sym_ident,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_line_comment] = sym_line_comment,
  [sym_source_file] = sym_source_file,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [aux_sym_stats_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field___kind = 1,
  field_expr = 2,
  field_ident = 3,
  field_inner_type = 4,
  field_lhs = 5,
  field_main = 6,
  field_rhs = 7,
  field_stat = 8,
  field_type = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field___kind] = "__kind",
  [field_expr] = "expr",
  [field_ident] = "ident",
  [field_inner_type] = "inner_type",
  [field_lhs] = "lhs",
  [field_main] = "main",
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
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 2},
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
    {field_expr, 3},
    {field_ident, 1},
    {field_type, 0},
  [12] =
    {field_lhs, 2},
    {field_rhs, 4},
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
      if (lookahead == '!') ADVANCE(58);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(75);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == ';') ADVANCE(80);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(64);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == ']') ADVANCE(73);
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
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(42);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= 127)) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '[') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(70);
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
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'g') ADVANCE(56);
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
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(74);
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
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == '|') ADVANCE(71);
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
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_chr);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_fst);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_len);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_ord);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_snd);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_op_bang);
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_op_asterix);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_op_slash);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_op_percent);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_op_plus);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_op_dash);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_op_gt);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_op_ge);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_op_lt);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_op_le);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_op_eq);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_op_ne);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_op_and);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_op_or);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_pair);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_str_liter);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(83);
      if (lookahead != 0) ADVANCE(84);
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
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_str_liter] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [anon_sym_begin] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_pair,
    STATE(10), 1,
      sym_stat,
    STATE(14), 1,
      sym_decl_stat,
    STATE(18), 1,
      sym_type,
    STATE(28), 1,
      sym_stats,
    STATE(15), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [30] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_pair,
    STATE(14), 1,
      sym_decl_stat,
    STATE(17), 1,
      sym_stat,
    STATE(18), 1,
      sym_type,
    STATE(15), 3,
      sym_base_type,
      sym_array_type,
      sym_pair_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [57] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_pair,
    STATE(13), 1,
      sym_raw_pair_type,
    STATE(15), 1,
      sym_pair_type,
    STATE(26), 1,
      sym_type,
    STATE(30), 1,
      sym_pair_elem_type,
    STATE(9), 2,
      sym_base_type,
      sym_array_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [86] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_pair,
    STATE(13), 1,
      sym_raw_pair_type,
    STATE(15), 1,
      sym_pair_type,
    STATE(26), 1,
      sym_type,
    STATE(27), 1,
      sym_pair_elem_type,
    STATE(9), 2,
      sym_base_type,
      sym_array_type,
    ACTIONS(7), 4,
      sym_bool,
      sym_char,
      sym_int,
      sym_string,
  [115] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(13), 4,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ident,
  [125] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 4,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ident,
  [135] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(17), 1,
      anon_sym_end,
    ACTIONS(19), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym_stats_repeat1,
  [148] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(22), 1,
      anon_sym_LBRACK,
    ACTIONS(24), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [159] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(26), 1,
      anon_sym_end,
    ACTIONS(28), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      aux_sym_stats_repeat1,
  [172] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(30), 1,
      anon_sym_LPAREN,
    ACTIONS(32), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [183] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(28), 1,
      anon_sym_SEMI,
    ACTIONS(34), 1,
      anon_sym_end,
    STATE(8), 1,
      aux_sym_stats_repeat1,
  [196] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(24), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [204] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(36), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [212] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(22), 2,
      anon_sym_LBRACK,
      sym_ident,
  [220] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(38), 1,
      sym_str_liter,
    STATE(20), 1,
      sym_expr,
  [230] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(40), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [238] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      sym_ident,
  [248] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(46), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [256] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(48), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [264] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(50), 2,
      anon_sym_LBRACK,
      sym_ident,
  [272] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
  [279] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
  [286] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(56), 1,
      anon_sym_EQ,
  [293] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
  [300] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
  [307] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(60), 1,
      anon_sym_COMMA,
  [314] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(62), 1,
      anon_sym_end,
  [321] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(30), 1,
      anon_sym_LPAREN,
  [328] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 57,
  [SMALL_STATE(5)] = 86,
  [SMALL_STATE(6)] = 115,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 148,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 172,
  [SMALL_STATE(12)] = 183,
  [SMALL_STATE(13)] = 196,
  [SMALL_STATE(14)] = 204,
  [SMALL_STATE(15)] = 212,
  [SMALL_STATE(16)] = 220,
  [SMALL_STATE(17)] = 230,
  [SMALL_STATE(18)] = 238,
  [SMALL_STATE(19)] = 248,
  [SMALL_STATE(20)] = 256,
  [SMALL_STATE(21)] = 264,
  [SMALL_STATE(22)] = 272,
  [SMALL_STATE(23)] = 279,
  [SMALL_STATE(24)] = 286,
  [SMALL_STATE(25)] = 293,
  [SMALL_STATE(26)] = 300,
  [SMALL_STATE(27)] = 307,
  [SMALL_STATE(28)] = 314,
  [SMALL_STATE(29)] = 321,
  [SMALL_STATE(30)] = 328,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_base_type, 1, .production_id = 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 7),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 7), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, .production_id = 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair_elem_type, 1, .production_id = 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stats, 1, .production_id = 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_pair_type, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stats, 2, .production_id = 4),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stat, 1, .production_id = 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 6),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stat, 4, .production_id = 8),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair_type, 6, .production_id = 9),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 3),
  [54] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
