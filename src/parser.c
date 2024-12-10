#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 1
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_text_node = 1,
  anon_sym_LBRACE_LBRACE = 2,
  anon_sym_RBRACE_RBRACE = 3,
  anon_sym_LBRACE_LBRACE_POUND = 4,
  anon_sym_LBRACE_LBRACE_CARET = 5,
  anon_sym_LBRACE_LBRACE_SLASH = 6,
  sym_identifier = 7,
  anon_sym_DOT = 8,
  anon_sym_BANG = 9,
  aux_sym_comment_token1 = 10,
  anon_sym_GT = 11,
  sym_source_file = 12,
  sym__definition = 13,
  sym__left_delimiter = 14,
  sym__right_delimiter = 15,
  sym__block_start_left_delimiter = 16,
  sym__block_end_left_delimiter = 17,
  sym_path_expression = 18,
  sym_comment = 19,
  sym_interpolation = 20,
  sym_block_start = 21,
  sym_block_end = 22,
  sym_block = 23,
  sym_partial = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym_path_expression_repeat1 = 26,
  alias_sym_string = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text_node] = "text_node",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_LBRACE_POUND] = "{{#",
  [anon_sym_LBRACE_LBRACE_CARET] = "{{^",
  [anon_sym_LBRACE_LBRACE_SLASH] = "{{/",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_BANG] = "!",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_GT] = ">",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__left_delimiter] = "_left_delimiter",
  [sym__right_delimiter] = "_right_delimiter",
  [sym__block_start_left_delimiter] = "_block_start_left_delimiter",
  [sym__block_end_left_delimiter] = "_block_end_left_delimiter",
  [sym_path_expression] = "path_expression",
  [sym_comment] = "comment",
  [sym_interpolation] = "interpolation",
  [sym_block_start] = "block_start",
  [sym_block_end] = "block_end",
  [sym_block] = "block",
  [sym_partial] = "partial",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_path_expression_repeat1] = "path_expression_repeat1",
  [alias_sym_string] = "string",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text_node] = sym_text_node,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_LBRACE_POUND] = anon_sym_LBRACE_LBRACE_POUND,
  [anon_sym_LBRACE_LBRACE_CARET] = anon_sym_LBRACE_LBRACE_CARET,
  [anon_sym_LBRACE_LBRACE_SLASH] = anon_sym_LBRACE_LBRACE_SLASH,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_BANG] = anon_sym_BANG,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__left_delimiter] = sym__left_delimiter,
  [sym__right_delimiter] = sym__right_delimiter,
  [sym__block_start_left_delimiter] = sym__block_start_left_delimiter,
  [sym__block_end_left_delimiter] = sym__block_end_left_delimiter,
  [sym_path_expression] = sym_path_expression,
  [sym_comment] = sym_comment,
  [sym_interpolation] = sym_interpolation,
  [sym_block_start] = sym_block_start,
  [sym_block_end] = sym_block_end,
  [sym_block] = sym_block,
  [sym_partial] = sym_partial,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_path_expression_repeat1] = aux_sym_path_expression_repeat1,
  [alias_sym_string] = alias_sym_string,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text_node] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__left_delimiter] = {
    .visible = false,
    .named = true,
  },
  [sym__right_delimiter] = {
    .visible = false,
    .named = true,
  },
  [sym__block_start_left_delimiter] = {
    .visible = false,
    .named = true,
  },
  [sym__block_end_left_delimiter] = {
    .visible = false,
    .named = true,
  },
  [sym_path_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_partial] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_string] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_content = 1,
  field_path = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_path] = "path",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_content, 1},
  [2] =
    {field_path, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [2] = alias_sym_string,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 9,
  [16] = 16,
  [17] = 10,
  [18] = 12,
  [19] = 14,
  [20] = 13,
  [21] = 16,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 27,
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
  [39] = 38,
  [40] = 36,
  [41] = 35,
  [42] = 37,
  [43] = 34,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 46,
  [48] = 48,
  [49] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '>') ADVANCE(21);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '}') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead != 0 &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '>') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead != 0 &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '}') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(11);
      END_STATE();
    case 5:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '{') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(9);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_text_node);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_text_node);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '^') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_POUND);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_CARET);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_CARET] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_SLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym__definition] = STATE(7),
    [sym__left_delimiter] = STATE(27),
    [sym__block_start_left_delimiter] = STATE(33),
    [sym_comment] = STATE(7),
    [sym_interpolation] = STATE(7),
    [sym_block_start] = STATE(4),
    [sym_block] = STATE(7),
    [sym_partial] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text_node] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE_POUND] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_CARET] = ACTIONS(9),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym__left_delimiter] = STATE(28),
    [sym__block_start_left_delimiter] = STATE(33),
    [sym__block_end_left_delimiter] = STATE(43),
    [sym_comment] = STATE(3),
    [sym_interpolation] = STATE(3),
    [sym_block_start] = STATE(2),
    [sym_block_end] = STATE(15),
    [sym_block] = STATE(3),
    [sym_partial] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [sym_text_node] = ACTIONS(11),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACE_LBRACE_POUND] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_CARET] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_SLASH] = ACTIONS(15),
  },
  [3] = {
    [sym__definition] = STATE(8),
    [sym__left_delimiter] = STATE(28),
    [sym__block_start_left_delimiter] = STATE(33),
    [sym__block_end_left_delimiter] = STATE(43),
    [sym_comment] = STATE(8),
    [sym_interpolation] = STATE(8),
    [sym_block_start] = STATE(2),
    [sym_block_end] = STATE(18),
    [sym_block] = STATE(8),
    [sym_partial] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [sym_text_node] = ACTIONS(17),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACE_LBRACE_POUND] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_CARET] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_SLASH] = ACTIONS(15),
  },
  [4] = {
    [sym__definition] = STATE(5),
    [sym__left_delimiter] = STATE(28),
    [sym__block_start_left_delimiter] = STATE(33),
    [sym__block_end_left_delimiter] = STATE(34),
    [sym_comment] = STATE(5),
    [sym_interpolation] = STATE(5),
    [sym_block_start] = STATE(2),
    [sym_block_end] = STATE(9),
    [sym_block] = STATE(5),
    [sym_partial] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_text_node] = ACTIONS(19),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACE_LBRACE_POUND] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_CARET] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_SLASH] = ACTIONS(21),
  },
  [5] = {
    [sym__definition] = STATE(8),
    [sym__left_delimiter] = STATE(28),
    [sym__block_start_left_delimiter] = STATE(33),
    [sym__block_end_left_delimiter] = STATE(34),
    [sym_comment] = STATE(8),
    [sym_interpolation] = STATE(8),
    [sym_block_start] = STATE(2),
    [sym_block_end] = STATE(12),
    [sym_block] = STATE(8),
    [sym_partial] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [sym_text_node] = ACTIONS(17),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(13),
    [anon_sym_LBRACE_LBRACE_POUND] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_CARET] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_SLASH] = ACTIONS(21),
  },
  [6] = {
    [sym__definition] = STATE(6),
    [sym__left_delimiter] = STATE(27),
    [sym__block_start_left_delimiter] = STATE(33),
    [sym_comment] = STATE(6),
    [sym_interpolation] = STATE(6),
    [sym_block_start] = STATE(4),
    [sym_block] = STATE(6),
    [sym_partial] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_text_node] = ACTIONS(25),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(28),
    [anon_sym_LBRACE_LBRACE_POUND] = ACTIONS(31),
    [anon_sym_LBRACE_LBRACE_CARET] = ACTIONS(31),
  },
  [7] = {
    [sym__definition] = STATE(6),
    [sym__left_delimiter] = STATE(27),
    [sym__block_start_left_delimiter] = STATE(33),
    [sym_comment] = STATE(6),
    [sym_interpolation] = STATE(6),
    [sym_block_start] = STATE(4),
    [sym_block] = STATE(6),
    [sym_partial] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(34),
    [sym_text_node] = ACTIONS(36),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE_POUND] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_CARET] = ACTIONS(9),
  },
  [8] = {
    [sym__definition] = STATE(8),
    [sym__left_delimiter] = STATE(28),
    [sym__block_start_left_delimiter] = STATE(33),
    [sym_comment] = STATE(8),
    [sym_interpolation] = STATE(8),
    [sym_block_start] = STATE(2),
    [sym_block] = STATE(8),
    [sym_partial] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [sym_text_node] = ACTIONS(38),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(41),
    [anon_sym_LBRACE_LBRACE_POUND] = ACTIONS(31),
    [anon_sym_LBRACE_LBRACE_CARET] = ACTIONS(31),
    [anon_sym_LBRACE_LBRACE_SLASH] = ACTIONS(44),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      sym_text_node,
    ACTIONS(48), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE_CARET,
  [10] = 2,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      sym_text_node,
    ACTIONS(52), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE_CARET,
  [20] = 2,
    ACTIONS(54), 1,
      sym_text_node,
    ACTIONS(56), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE_CARET,
      anon_sym_LBRACE_LBRACE_SLASH,
  [30] = 2,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      sym_text_node,
    ACTIONS(60), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE_CARET,
  [40] = 2,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym_text_node,
    ACTIONS(64), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE_CARET,
  [50] = 2,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym_text_node,
    ACTIONS(68), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE_CARET,
  [60] = 2,
    ACTIONS(46), 1,
      sym_text_node,
    ACTIONS(48), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE_CARET,
      anon_sym_LBRACE_LBRACE_SLASH,
  [70] = 2,
    ACTIONS(70), 2,
      ts_builtin_sym_end,
      sym_text_node,
    ACTIONS(72), 3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE_CARET,
  [80] = 2,
    ACTIONS(50), 1,
      sym_text_node,
    ACTIONS(52), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE_CARET,
      anon_sym_LBRACE_LBRACE_SLASH,
  [90] = 2,
    ACTIONS(58), 1,
      sym_text_node,
    ACTIONS(60), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE_CARET,
      anon_sym_LBRACE_LBRACE_SLASH,
  [100] = 2,
    ACTIONS(66), 1,
      sym_text_node,
    ACTIONS(68), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE_CARET,
      anon_sym_LBRACE_LBRACE_SLASH,
  [110] = 2,
    ACTIONS(62), 1,
      sym_text_node,
    ACTIONS(64), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE_CARET,
      anon_sym_LBRACE_LBRACE_SLASH,
  [120] = 2,
    ACTIONS(70), 1,
      sym_text_node,
    ACTIONS(72), 4,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE_CARET,
      anon_sym_LBRACE_LBRACE_SLASH,
  [130] = 4,
    ACTIONS(74), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(76), 1,
      anon_sym_DOT,
    STATE(16), 1,
      sym__right_delimiter,
    STATE(30), 1,
      aux_sym_path_expression_repeat1,
  [143] = 4,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(78), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(10), 1,
      sym__right_delimiter,
    STATE(30), 1,
      aux_sym_path_expression_repeat1,
  [156] = 4,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(80), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(21), 1,
      sym__right_delimiter,
    STATE(30), 1,
      aux_sym_path_expression_repeat1,
  [169] = 4,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(82), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(17), 1,
      sym__right_delimiter,
    STATE(30), 1,
      aux_sym_path_expression_repeat1,
  [182] = 4,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(84), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(11), 1,
      sym__right_delimiter,
    STATE(30), 1,
      aux_sym_path_expression_repeat1,
  [195] = 4,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_BANG,
    ACTIONS(90), 1,
      anon_sym_GT,
    STATE(36), 1,
      sym_path_expression,
  [208] = 4,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_BANG,
    ACTIONS(96), 1,
      anon_sym_GT,
    STATE(40), 1,
      sym_path_expression,
  [221] = 3,
    ACTIONS(98), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(100), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_path_expression_repeat1,
  [231] = 3,
    ACTIONS(76), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(29), 1,
      aux_sym_path_expression_repeat1,
  [241] = 2,
    ACTIONS(84), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(11), 1,
      sym__right_delimiter,
  [248] = 1,
    ACTIONS(98), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DOT,
  [253] = 2,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(31), 1,
      sym_path_expression,
  [260] = 2,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(35), 1,
      sym_path_expression,
  [267] = 2,
    ACTIONS(74), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(16), 1,
      sym__right_delimiter,
  [274] = 2,
    ACTIONS(78), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(10), 1,
      sym__right_delimiter,
  [281] = 2,
    ACTIONS(109), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(19), 1,
      sym__right_delimiter,
  [288] = 2,
    ACTIONS(111), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(20), 1,
      sym__right_delimiter,
  [295] = 2,
    ACTIONS(113), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(13), 1,
      sym__right_delimiter,
  [302] = 2,
    ACTIONS(82), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(17), 1,
      sym__right_delimiter,
  [309] = 2,
    ACTIONS(80), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(21), 1,
      sym__right_delimiter,
  [316] = 2,
    ACTIONS(115), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(14), 1,
      sym__right_delimiter,
  [323] = 2,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(41), 1,
      sym_path_expression,
  [330] = 1,
    ACTIONS(119), 1,
      sym_identifier,
  [334] = 1,
    ACTIONS(121), 1,
      aux_sym_comment_token1,
  [338] = 1,
    ACTIONS(123), 1,
      aux_sym_comment_token1,
  [342] = 1,
    ACTIONS(125), 1,
      aux_sym_comment_token1,
  [346] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [350] = 1,
    ACTIONS(129), 1,
      aux_sym_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 10,
  [SMALL_STATE(11)] = 20,
  [SMALL_STATE(12)] = 30,
  [SMALL_STATE(13)] = 40,
  [SMALL_STATE(14)] = 50,
  [SMALL_STATE(15)] = 60,
  [SMALL_STATE(16)] = 70,
  [SMALL_STATE(17)] = 80,
  [SMALL_STATE(18)] = 90,
  [SMALL_STATE(19)] = 100,
  [SMALL_STATE(20)] = 110,
  [SMALL_STATE(21)] = 120,
  [SMALL_STATE(22)] = 130,
  [SMALL_STATE(23)] = 143,
  [SMALL_STATE(24)] = 156,
  [SMALL_STATE(25)] = 169,
  [SMALL_STATE(26)] = 182,
  [SMALL_STATE(27)] = 195,
  [SMALL_STATE(28)] = 208,
  [SMALL_STATE(29)] = 221,
  [SMALL_STATE(30)] = 231,
  [SMALL_STATE(31)] = 241,
  [SMALL_STATE(32)] = 248,
  [SMALL_STATE(33)] = 253,
  [SMALL_STATE(34)] = 260,
  [SMALL_STATE(35)] = 267,
  [SMALL_STATE(36)] = 274,
  [SMALL_STATE(37)] = 281,
  [SMALL_STATE(38)] = 288,
  [SMALL_STATE(39)] = 295,
  [SMALL_STATE(40)] = 302,
  [SMALL_STATE(41)] = 309,
  [SMALL_STATE(42)] = 316,
  [SMALL_STATE(43)] = 323,
  [SMALL_STATE(44)] = 330,
  [SMALL_STATE(45)] = 334,
  [SMALL_STATE(46)] = 338,
  [SMALL_STATE(47)] = 342,
  [SMALL_STATE(48)] = 346,
  [SMALL_STATE(49)] = 350,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start, 3, 0, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_start, 3, 0, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_partial, 4, 0, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_partial, 4, 0, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 4, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 4, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 3, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_end, 3, 0, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_expression_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path_expression, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mustache(void) {
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
