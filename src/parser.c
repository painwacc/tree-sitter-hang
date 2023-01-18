#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 8

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
  sym_str_liter = 15,
  anon_sym_LBRACK = 16,
  anon_sym_COMMA = 17,
  anon_sym_RBRACK = 18,
  sym_ident = 19,
  anon_sym_SEMI = 20,
  anon_sym_EQ = 21,
  sym_line_comment = 22,
  sym_source_file = 23,
  sym_type = 24,
  sym_expr = 25,
  sym_stats = 26,
  sym_stat = 27,
  sym_decl_stat = 28,
  aux_sym_stats_repeat1 = 29,
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
  [sym_str_liter] = "str_liter",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_ident] = "ident",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [sym_line_comment] = "line_comment",
  [sym_source_file] = "source_file",
  [sym_type] = "type",
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
  [sym_str_liter] = sym_str_liter,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_ident] = sym_ident,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_line_comment] = sym_line_comment,
  [sym_source_file] = sym_source_file,
  [sym_type] = sym_type,
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
  [sym_str_liter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
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
  field_main = 4,
  field_stat = 5,
  field_type = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field___kind] = "__kind",
  [field_expr] = "expr",
  [field_ident] = "ident",
  [field_main] = "main",
  [field_stat] = "stat",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_stat, 0},
  [1] =
    {field___kind, 0},
  [2] =
    {field_main, 1},
  [3] =
    {field_stat, 0},
    {field_stat, 1, .inherited = true},
  [5] =
    {field_stat, 1},
  [6] =
    {field_stat, 0, .inherited = true},
    {field_stat, 1, .inherited = true},
  [8] =
    {field_expr, 3},
    {field_ident, 1},
    {field_type, 0},
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
      if (eof) ADVANCE(38);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(37);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= 127)) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(4);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(7);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 37:
      if (sym_str_liter_character_set_1(lookahead)) ADVANCE(1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_chr);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_fst);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_len);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_ord);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_snd);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_str_liter);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(60);
      if (lookahead != 0) ADVANCE(61);
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
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
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
    [sym_str_liter] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [anon_sym_begin] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_string,
    STATE(4), 1,
      sym_stat,
    STATE(7), 1,
      sym_decl_stat,
    STATE(14), 1,
      sym_type,
    STATE(15), 1,
      sym_stats,
  [19] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(7), 1,
      sym_string,
    STATE(7), 1,
      sym_decl_stat,
    STATE(9), 1,
      sym_stat,
    STATE(14), 1,
      sym_type,
  [35] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_end,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      aux_sym_stats_repeat1,
  [48] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(13), 1,
      anon_sym_end,
    STATE(6), 1,
      aux_sym_stats_repeat1,
  [61] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(15), 1,
      anon_sym_end,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      aux_sym_stats_repeat1,
  [74] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(20), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [82] = 3,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(22), 1,
      sym_str_liter,
    STATE(11), 1,
      sym_expr,
  [92] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(24), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [100] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(26), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [108] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(28), 2,
      anon_sym_end,
      anon_sym_SEMI,
  [116] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
  [123] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(32), 1,
      sym_ident,
  [130] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(34), 1,
      sym_ident,
  [137] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(36), 1,
      anon_sym_end,
  [144] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(38), 1,
      anon_sym_EQ,
  [151] = 2,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 35,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 61,
  [SMALL_STATE(7)] = 74,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 92,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 108,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 123,
  [SMALL_STATE(14)] = 130,
  [SMALL_STATE(15)] = 137,
  [SMALL_STATE(16)] = 144,
  [SMALL_STATE(17)] = 151,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stats, 1, .production_id = 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stats, 2, .production_id = 4),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 6),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 6), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stat, 1, .production_id = 2),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stats_repeat1, 2, .production_id = 5),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_stat, 4, .production_id = 7),
  [30] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 3),
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
