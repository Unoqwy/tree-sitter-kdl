#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 120
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 14

enum {
  aux_sym_document_token1 = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_node_comment_prefix = 4,
  anon_sym_SEMI = 5,
  sym_bare_identifier = 6,
  anon_sym_null = 7,
  anon_sym_EQ = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_DQUOTE = 11,
  sym__char = 12,
  anon_sym_true = 13,
  anon_sym_false = 14,
  anon_sym_DOT = 15,
  aux_sym_decimal_token1 = 16,
  anon_sym_e = 17,
  anon_sym_E = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_SLASH_SLASH = 21,
  aux_sym_single_line_comment_token1 = 22,
  sym_document = 23,
  sym_node = 24,
  sym_node_block = 25,
  sym__node_terminator = 26,
  sym_identifier = 27,
  sym_keyword = 28,
  sym_prop = 29,
  sym_value = 30,
  sym_type = 31,
  sym_string = 32,
  sym__escaped_string = 33,
  sym_number = 34,
  sym_boolean = 35,
  sym_decimal = 36,
  sym_exponent = 37,
  sym_integer = 38,
  sym_sign = 39,
  sym_single_line_comment = 40,
  aux_sym_document_repeat1 = 41,
  aux_sym_node_repeat1 = 42,
  aux_sym__escaped_string_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_node_comment_prefix] = "node_comment_prefix",
  [anon_sym_SEMI] = ";",
  [sym_bare_identifier] = "bare_identifier",
  [anon_sym_null] = "null",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DQUOTE] = "\"",
  [sym__char] = "_char",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DOT] = ".",
  [aux_sym_decimal_token1] = "decimal_token1",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_single_line_comment_token1] = "single_line_comment_token1",
  [sym_document] = "document",
  [sym_node] = "node",
  [sym_node_block] = "node_block",
  [sym__node_terminator] = "_node_terminator",
  [sym_identifier] = "identifier",
  [sym_keyword] = "keyword",
  [sym_prop] = "prop",
  [sym_value] = "value",
  [sym_type] = "type",
  [sym_string] = "string",
  [sym__escaped_string] = "_escaped_string",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [sym_decimal] = "decimal",
  [sym_exponent] = "exponent",
  [sym_integer] = "integer",
  [sym_sign] = "sign",
  [sym_single_line_comment] = "single_line_comment",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_node_repeat1] = "node_repeat1",
  [aux_sym__escaped_string_repeat1] = "_escaped_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_node_comment_prefix] = sym_node_comment_prefix,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_bare_identifier] = sym_bare_identifier,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__char] = sym__char,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_decimal_token1] = aux_sym_decimal_token1,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_single_line_comment_token1] = aux_sym_single_line_comment_token1,
  [sym_document] = sym_document,
  [sym_node] = sym_node,
  [sym_node_block] = sym_node_block,
  [sym__node_terminator] = sym__node_terminator,
  [sym_identifier] = sym_identifier,
  [sym_keyword] = sym_keyword,
  [sym_prop] = sym_prop,
  [sym_value] = sym_value,
  [sym_type] = sym_type,
  [sym_string] = sym_string,
  [sym__escaped_string] = sym__escaped_string,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [sym_decimal] = sym_decimal,
  [sym_exponent] = sym_exponent,
  [sym_integer] = sym_integer,
  [sym_sign] = sym_sign,
  [sym_single_line_comment] = sym_single_line_comment,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
  [aux_sym__escaped_string_repeat1] = aux_sym__escaped_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_node_comment_prefix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_bare_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__char] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_decimal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_node_block] = {
    .visible = true,
    .named = true,
  },
  [sym__node_terminator] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__escaped_string] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_sign] = {
    .visible = true,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escaped_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_block = 1,
  field_eol_comment = 2,
  field_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_block] = "block",
  [field_eol_comment] = "eol_comment",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 2},
  [8] = {.index = 15, .length = 2},
  [9] = {.index = 17, .length = 3},
  [10] = {.index = 20, .length = 3},
  [11] = {.index = 23, .length = 3},
  [12] = {.index = 26, .length = 2},
  [13] = {.index = 28, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_eol_comment, 1, .inherited = true},
    {field_name, 0},
  [2] =
    {field_eol_comment, 0},
  [3] =
    {field_eol_comment, 2, .inherited = true},
    {field_name, 1},
  [5] =
    {field_block, 1},
    {field_eol_comment, 2, .inherited = true},
    {field_name, 0},
  [8] =
    {field_eol_comment, 2, .inherited = true},
    {field_name, 0},
  [10] =
    {field_block, 2},
    {field_eol_comment, 3, .inherited = true},
    {field_name, 1},
  [13] =
    {field_eol_comment, 3, .inherited = true},
    {field_name, 1},
  [15] =
    {field_eol_comment, 3, .inherited = true},
    {field_name, 2},
  [17] =
    {field_block, 2},
    {field_eol_comment, 3, .inherited = true},
    {field_name, 0},
  [20] =
    {field_block, 3},
    {field_eol_comment, 4, .inherited = true},
    {field_name, 1},
  [23] =
    {field_block, 3},
    {field_eol_comment, 4, .inherited = true},
    {field_name, 2},
  [26] =
    {field_eol_comment, 4, .inherited = true},
    {field_name, 2},
  [28] =
    {field_block, 4},
    {field_eol_comment, 5, .inherited = true},
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_bare_identifier_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < ')'
      ? (c < 0
        ? c == 0
        : c <= 31)
      : (c <= ')' || c == ','))
    : (c <= '9' || (c < '{'
      ? (c < '['
        ? (c >= ';' && c <= '>')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_bare_identifier_character_set_2(int32_t c) {
  return (c < '/'
    ? (c < '"'
      ? (c < 0
        ? c == 0
        : c <= ' ')
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= '/' || (c < '{'
      ? (c < '['
        ? (c >= ';' && c <= '>')
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != ',' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '}') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (!sym_bare_identifier_character_set_1(lookahead)) ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(62);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != ')' &&
          lookahead != ',' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{') ADVANCE(41);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != ',' &&
          (lookahead < '<' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(41);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_document_token1);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_node_comment_prefix);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_bare_identifier);
      if (lookahead == 'a') ADVANCE(34);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_bare_identifier);
      if (lookahead == 'e') ADVANCE(51);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_bare_identifier);
      if (lookahead == 'e') ADVANCE(53);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_bare_identifier);
      if (lookahead == 'l') ADVANCE(38);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_bare_identifier);
      if (lookahead == 'l') ADVANCE(43);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_bare_identifier);
      if (lookahead == 'l') ADVANCE(35);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_bare_identifier);
      if (lookahead == 'r') ADVANCE(39);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_bare_identifier);
      if (lookahead == 's') ADVANCE(33);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_bare_identifier);
      if (lookahead == 'u') ADVANCE(32);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_bare_identifier);
      if (lookahead == 'u') ADVANCE(36);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_bare_identifier);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_null);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_e);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_E);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!sym_bare_identifier_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 20},
  [57] = {.lex_state = 20},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 20},
  [60] = {.lex_state = 20},
  [61] = {.lex_state = 20},
  [62] = {.lex_state = 20},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 20},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 20},
  [73] = {.lex_state = 20},
  [74] = {.lex_state = 20},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 20},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 20},
  [92] = {.lex_state = 20},
  [93] = {.lex_state = 20},
  [94] = {.lex_state = 20},
  [95] = {.lex_state = 20},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 20},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 63},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 20},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 63},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_node_comment_prefix] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_bare_identifier] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_decimal_token1] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(110),
    [sym_node] = STATE(40),
    [sym_identifier] = STATE(5),
    [sym_type] = STATE(76),
    [sym_string] = STATE(21),
    [sym__escaped_string] = STATE(25),
    [aux_sym_document_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_document_token1] = ACTIONS(5),
    [sym_node_comment_prefix] = ACTIONS(7),
    [sym_bare_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_DQUOTE] = ACTIONS(13),
  },
  [2] = {
    [sym_node_block] = STATE(93),
    [sym__node_terminator] = STATE(62),
    [sym_identifier] = STATE(105),
    [sym_keyword] = STATE(34),
    [sym_prop] = STATE(14),
    [sym_value] = STATE(14),
    [sym_type] = STATE(24),
    [sym_string] = STATE(23),
    [sym__escaped_string] = STATE(25),
    [sym_number] = STATE(34),
    [sym_boolean] = STATE(29),
    [sym_decimal] = STATE(28),
    [sym_integer] = STATE(15),
    [sym_sign] = STATE(116),
    [sym_single_line_comment] = STATE(71),
    [aux_sym_node_repeat1] = STATE(14),
    [aux_sym_document_token1] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_node_comment_prefix] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [sym_bare_identifier] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [aux_sym_decimal_token1] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
  },
  [3] = {
    [sym_node_block] = STATE(85),
    [sym__node_terminator] = STATE(67),
    [sym_identifier] = STATE(105),
    [sym_keyword] = STATE(34),
    [sym_prop] = STATE(13),
    [sym_value] = STATE(13),
    [sym_type] = STATE(24),
    [sym_string] = STATE(23),
    [sym__escaped_string] = STATE(25),
    [sym_number] = STATE(34),
    [sym_boolean] = STATE(29),
    [sym_decimal] = STATE(28),
    [sym_integer] = STATE(15),
    [sym_sign] = STATE(116),
    [sym_single_line_comment] = STATE(71),
    [aux_sym_node_repeat1] = STATE(13),
    [aux_sym_document_token1] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_node_comment_prefix] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(37),
    [sym_bare_identifier] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [aux_sym_decimal_token1] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
  },
  [4] = {
    [sym_node_block] = STATE(80),
    [sym__node_terminator] = STATE(73),
    [sym_identifier] = STATE(105),
    [sym_keyword] = STATE(34),
    [sym_prop] = STATE(2),
    [sym_value] = STATE(2),
    [sym_type] = STATE(24),
    [sym_string] = STATE(23),
    [sym__escaped_string] = STATE(25),
    [sym_number] = STATE(34),
    [sym_boolean] = STATE(29),
    [sym_decimal] = STATE(28),
    [sym_integer] = STATE(15),
    [sym_sign] = STATE(116),
    [sym_single_line_comment] = STATE(71),
    [aux_sym_node_repeat1] = STATE(2),
    [aux_sym_document_token1] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_node_comment_prefix] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(41),
    [sym_bare_identifier] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [aux_sym_decimal_token1] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
  },
  [5] = {
    [sym_node_block] = STATE(83),
    [sym__node_terminator] = STATE(74),
    [sym_identifier] = STATE(105),
    [sym_keyword] = STATE(34),
    [sym_prop] = STATE(11),
    [sym_value] = STATE(11),
    [sym_type] = STATE(24),
    [sym_string] = STATE(23),
    [sym__escaped_string] = STATE(25),
    [sym_number] = STATE(34),
    [sym_boolean] = STATE(29),
    [sym_decimal] = STATE(28),
    [sym_integer] = STATE(15),
    [sym_sign] = STATE(116),
    [sym_single_line_comment] = STATE(66),
    [aux_sym_node_repeat1] = STATE(11),
    [aux_sym_document_token1] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_node_comment_prefix] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(45),
    [sym_bare_identifier] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [aux_sym_decimal_token1] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(47),
  },
  [6] = {
    [sym_node_block] = STATE(81),
    [sym__node_terminator] = STATE(50),
    [sym_identifier] = STATE(105),
    [sym_keyword] = STATE(34),
    [sym_prop] = STATE(14),
    [sym_value] = STATE(14),
    [sym_type] = STATE(24),
    [sym_string] = STATE(23),
    [sym__escaped_string] = STATE(25),
    [sym_number] = STATE(34),
    [sym_boolean] = STATE(29),
    [sym_decimal] = STATE(28),
    [sym_integer] = STATE(15),
    [sym_sign] = STATE(116),
    [sym_single_line_comment] = STATE(71),
    [aux_sym_node_repeat1] = STATE(14),
    [aux_sym_document_token1] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_node_comment_prefix] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(51),
    [sym_bare_identifier] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [aux_sym_decimal_token1] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
  },
  [7] = {
    [sym_node_block] = STATE(88),
    [sym__node_terminator] = STATE(47),
    [sym_identifier] = STATE(105),
    [sym_keyword] = STATE(34),
    [sym_prop] = STATE(10),
    [sym_value] = STATE(10),
    [sym_type] = STATE(24),
    [sym_string] = STATE(23),
    [sym__escaped_string] = STATE(25),
    [sym_number] = STATE(34),
    [sym_boolean] = STATE(29),
    [sym_decimal] = STATE(28),
    [sym_integer] = STATE(15),
    [sym_sign] = STATE(116),
    [sym_single_line_comment] = STATE(66),
    [aux_sym_node_repeat1] = STATE(10),
    [aux_sym_document_token1] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_node_comment_prefix] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(55),
    [sym_bare_identifier] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [aux_sym_decimal_token1] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(47),
  },
  [8] = {
    [sym_node_block] = STATE(87),
    [sym__node_terminator] = STATE(58),
    [sym_identifier] = STATE(105),
    [sym_keyword] = STATE(34),
    [sym_prop] = STATE(14),
    [sym_value] = STATE(14),
    [sym_type] = STATE(24),
    [sym_string] = STATE(23),
    [sym__escaped_string] = STATE(25),
    [sym_number] = STATE(34),
    [sym_boolean] = STATE(29),
    [sym_decimal] = STATE(28),
    [sym_integer] = STATE(15),
    [sym_sign] = STATE(116),
    [sym_single_line_comment] = STATE(66),
    [aux_sym_node_repeat1] = STATE(14),
    [aux_sym_document_token1] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_node_comment_prefix] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(59),
    [sym_bare_identifier] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [aux_sym_decimal_token1] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(47),
  },
  [9] = {
    [sym_node_block] = STATE(75),
    [sym__node_terminator] = STATE(63),
    [sym_identifier] = STATE(105),
    [sym_keyword] = STATE(34),
    [sym_prop] = STATE(8),
    [sym_value] = STATE(8),
    [sym_type] = STATE(24),
    [sym_string] = STATE(23),
    [sym__escaped_string] = STATE(25),
    [sym_number] = STATE(34),
    [sym_boolean] = STATE(29),
    [sym_decimal] = STATE(28),
    [sym_integer] = STATE(15),
    [sym_sign] = STATE(116),
    [sym_single_line_comment] = STATE(66),
    [aux_sym_node_repeat1] = STATE(8),
    [aux_sym_document_token1] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_node_comment_prefix] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(63),
    [sym_bare_identifier] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [aux_sym_decimal_token1] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(47),
  },
  [10] = {
    [sym_node_block] = STATE(86),
    [sym__node_terminator] = STATE(72),
    [sym_identifier] = STATE(105),
    [sym_keyword] = STATE(34),
    [sym_prop] = STATE(14),
    [sym_value] = STATE(14),
    [sym_type] = STATE(24),
    [sym_string] = STATE(23),
    [sym__escaped_string] = STATE(25),
    [sym_number] = STATE(34),
    [sym_boolean] = STATE(29),
    [sym_decimal] = STATE(28),
    [sym_integer] = STATE(15),
    [sym_sign] = STATE(116),
    [sym_single_line_comment] = STATE(66),
    [aux_sym_node_repeat1] = STATE(14),
    [aux_sym_document_token1] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_node_comment_prefix] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(67),
    [sym_bare_identifier] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [aux_sym_decimal_token1] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(47),
  },
  [11] = {
    [sym_node_block] = STATE(84),
    [sym__node_terminator] = STATE(55),
    [sym_identifier] = STATE(105),
    [sym_keyword] = STATE(34),
    [sym_prop] = STATE(14),
    [sym_value] = STATE(14),
    [sym_type] = STATE(24),
    [sym_string] = STATE(23),
    [sym__escaped_string] = STATE(25),
    [sym_number] = STATE(34),
    [sym_boolean] = STATE(29),
    [sym_decimal] = STATE(28),
    [sym_integer] = STATE(15),
    [sym_sign] = STATE(116),
    [sym_single_line_comment] = STATE(66),
    [aux_sym_node_repeat1] = STATE(14),
    [aux_sym_document_token1] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_node_comment_prefix] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(71),
    [sym_bare_identifier] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [aux_sym_decimal_token1] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(47),
  },
  [12] = {
    [sym_node_block] = STATE(91),
    [sym__node_terminator] = STATE(59),
    [sym_identifier] = STATE(105),
    [sym_keyword] = STATE(34),
    [sym_prop] = STATE(6),
    [sym_value] = STATE(6),
    [sym_type] = STATE(24),
    [sym_string] = STATE(23),
    [sym__escaped_string] = STATE(25),
    [sym_number] = STATE(34),
    [sym_boolean] = STATE(29),
    [sym_decimal] = STATE(28),
    [sym_integer] = STATE(15),
    [sym_sign] = STATE(116),
    [sym_single_line_comment] = STATE(71),
    [aux_sym_node_repeat1] = STATE(6),
    [aux_sym_document_token1] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_node_comment_prefix] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(75),
    [sym_bare_identifier] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [aux_sym_decimal_token1] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
  },
  [13] = {
    [sym_node_block] = STATE(92),
    [sym__node_terminator] = STATE(60),
    [sym_identifier] = STATE(105),
    [sym_keyword] = STATE(34),
    [sym_prop] = STATE(14),
    [sym_value] = STATE(14),
    [sym_type] = STATE(24),
    [sym_string] = STATE(23),
    [sym__escaped_string] = STATE(25),
    [sym_number] = STATE(34),
    [sym_boolean] = STATE(29),
    [sym_decimal] = STATE(28),
    [sym_integer] = STATE(15),
    [sym_sign] = STATE(116),
    [sym_single_line_comment] = STATE(71),
    [aux_sym_node_repeat1] = STATE(14),
    [aux_sym_document_token1] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(17),
    [sym_node_comment_prefix] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym_bare_identifier] = ACTIONS(9),
    [anon_sym_null] = ACTIONS(23),
    [anon_sym_LPAREN] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [aux_sym_decimal_token1] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_SLASH_SLASH] = ACTIONS(33),
  },
  [14] = {
    [sym_identifier] = STATE(105),
    [sym_keyword] = STATE(34),
    [sym_prop] = STATE(14),
    [sym_value] = STATE(14),
    [sym_type] = STATE(24),
    [sym_string] = STATE(23),
    [sym__escaped_string] = STATE(25),
    [sym_number] = STATE(34),
    [sym_boolean] = STATE(29),
    [sym_decimal] = STATE(28),
    [sym_integer] = STATE(15),
    [sym_sign] = STATE(116),
    [aux_sym_node_repeat1] = STATE(14),
    [aux_sym_document_token1] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(83),
    [sym_node_comment_prefix] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [sym_bare_identifier] = ACTIONS(85),
    [anon_sym_null] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [aux_sym_decimal_token1] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_SLASH_SLASH] = ACTIONS(83),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(106), 1,
      aux_sym_document_token1,
    ACTIONS(110), 1,
      anon_sym_DOT,
    STATE(36), 1,
      sym_exponent,
    ACTIONS(112), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(108), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [29] = 14,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(116), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      aux_sym_decimal_token1,
    STATE(15), 1,
      sym_integer,
    STATE(24), 1,
      sym_type,
    STATE(25), 1,
      sym__escaped_string,
    STATE(28), 1,
      sym_decimal,
    STATE(29), 1,
      sym_boolean,
    STATE(30), 1,
      sym_value,
    STATE(116), 1,
      sym_sign,
    ACTIONS(120), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(34), 3,
      sym_keyword,
      sym_string,
      sym_number,
  [76] = 2,
    ACTIONS(126), 1,
      aux_sym_document_token1,
    ACTIONS(128), 16,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DOT,
      aux_sym_decimal_token1,
      anon_sym_e,
      anon_sym_E,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [98] = 2,
    ACTIONS(130), 1,
      aux_sym_document_token1,
    ACTIONS(132), 16,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DOT,
      aux_sym_decimal_token1,
      anon_sym_e,
      anon_sym_E,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [120] = 4,
    ACTIONS(134), 1,
      aux_sym_document_token1,
    STATE(35), 1,
      sym_exponent,
    ACTIONS(112), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(136), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [146] = 2,
    ACTIONS(138), 2,
      aux_sym_document_token1,
      anon_sym_EQ,
    ACTIONS(140), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [166] = 2,
    ACTIONS(142), 2,
      aux_sym_document_token1,
      anon_sym_EQ,
    ACTIONS(144), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [186] = 2,
    ACTIONS(146), 2,
      aux_sym_document_token1,
      anon_sym_EQ,
    ACTIONS(148), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [206] = 3,
    ACTIONS(142), 1,
      anon_sym_EQ,
    ACTIONS(150), 1,
      aux_sym_document_token1,
    ACTIONS(152), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [228] = 11,
    ACTIONS(114), 1,
      anon_sym_null,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(122), 1,
      aux_sym_decimal_token1,
    STATE(15), 1,
      sym_integer,
    STATE(25), 1,
      sym__escaped_string,
    STATE(28), 1,
      sym_decimal,
    STATE(29), 1,
      sym_boolean,
    STATE(116), 1,
      sym_sign,
    ACTIONS(120), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(26), 3,
      sym_keyword,
      sym_string,
      sym_number,
  [266] = 2,
    ACTIONS(154), 2,
      aux_sym_document_token1,
      anon_sym_EQ,
    ACTIONS(156), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [286] = 2,
    ACTIONS(158), 1,
      aux_sym_document_token1,
    ACTIONS(160), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [305] = 2,
    ACTIONS(126), 1,
      aux_sym_document_token1,
    ACTIONS(128), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [324] = 2,
    ACTIONS(162), 1,
      aux_sym_document_token1,
    ACTIONS(164), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [343] = 2,
    ACTIONS(166), 1,
      aux_sym_document_token1,
    ACTIONS(168), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [362] = 2,
    ACTIONS(170), 1,
      aux_sym_document_token1,
    ACTIONS(172), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [381] = 2,
    ACTIONS(174), 1,
      aux_sym_document_token1,
    ACTIONS(176), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [400] = 2,
    ACTIONS(178), 1,
      aux_sym_document_token1,
    ACTIONS(180), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [419] = 2,
    ACTIONS(130), 1,
      aux_sym_document_token1,
    ACTIONS(132), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [438] = 2,
    ACTIONS(150), 1,
      aux_sym_document_token1,
    ACTIONS(152), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [457] = 2,
    ACTIONS(182), 1,
      aux_sym_document_token1,
    ACTIONS(184), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [476] = 2,
    ACTIONS(186), 1,
      aux_sym_document_token1,
    ACTIONS(188), 13,
      anon_sym_LBRACE,
      sym_node_comment_prefix,
      anon_sym_SEMI,
      sym_bare_identifier,
      anon_sym_null,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH_SLASH,
  [495] = 11,
    ACTIONS(9), 1,
      sym_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      aux_sym_document_token1,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      sym_node_comment_prefix,
    STATE(4), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(25), 1,
      sym__escaped_string,
    STATE(77), 1,
      sym_type,
    STATE(42), 2,
      sym_node,
      aux_sym_document_repeat1,
  [530] = 11,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 1,
      aux_sym_document_token1,
    ACTIONS(201), 1,
      sym_node_comment_prefix,
    ACTIONS(204), 1,
      sym_bare_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(25), 1,
      sym__escaped_string,
    STATE(76), 1,
      sym_type,
    STATE(38), 2,
      sym_node,
      aux_sym_document_repeat1,
  [565] = 11,
    ACTIONS(9), 1,
      sym_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      sym_node_comment_prefix,
    ACTIONS(213), 1,
      aux_sym_document_token1,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(25), 1,
      sym__escaped_string,
    STATE(77), 1,
      sym_type,
    STATE(41), 2,
      sym_node,
      aux_sym_document_repeat1,
  [600] = 11,
    ACTIONS(7), 1,
      sym_node_comment_prefix,
    ACTIONS(9), 1,
      sym_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      aux_sym_document_token1,
    STATE(5), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(25), 1,
      sym__escaped_string,
    STATE(76), 1,
      sym_type,
    STATE(38), 2,
      sym_node,
      aux_sym_document_repeat1,
  [635] = 11,
    ACTIONS(204), 1,
      sym_bare_identifier,
    ACTIONS(207), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      aux_sym_document_token1,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 1,
      sym_node_comment_prefix,
    STATE(4), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(25), 1,
      sym__escaped_string,
    STATE(77), 1,
      sym_type,
    STATE(41), 2,
      sym_node,
      aux_sym_document_repeat1,
  [670] = 11,
    ACTIONS(9), 1,
      sym_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      sym_node_comment_prefix,
    ACTIONS(213), 1,
      aux_sym_document_token1,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(25), 1,
      sym__escaped_string,
    STATE(77), 1,
      sym_type,
    STATE(41), 2,
      sym_node,
      aux_sym_document_repeat1,
  [705] = 11,
    ACTIONS(9), 1,
      sym_bare_identifier,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      sym_node_comment_prefix,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      aux_sym_document_token1,
    STATE(4), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(25), 1,
      sym__escaped_string,
    STATE(77), 1,
      sym_type,
    STATE(39), 2,
      sym_node,
      aux_sym_document_repeat1,
  [740] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_bare_identifier,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(25), 1,
      sym__escaped_string,
    STATE(79), 1,
      sym_type,
  [762] = 7,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_bare_identifier,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(25), 1,
      sym__escaped_string,
    STATE(89), 1,
      sym_type,
  [784] = 1,
    ACTIONS(237), 7,
      anon_sym_null,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      aux_sym_decimal_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
  [794] = 2,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(241), 4,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [805] = 2,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(245), 4,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [816] = 2,
    ACTIONS(243), 1,
      aux_sym_document_token1,
    ACTIONS(245), 5,
      anon_sym_RBRACE,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [827] = 2,
    ACTIONS(247), 1,
      aux_sym_document_token1,
    ACTIONS(249), 5,
      anon_sym_RBRACE,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [838] = 2,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(253), 4,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [849] = 2,
    ACTIONS(255), 1,
      aux_sym_document_token1,
    ACTIONS(257), 5,
      anon_sym_RBRACE,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [860] = 2,
    ACTIONS(259), 1,
      aux_sym_document_token1,
    ACTIONS(261), 5,
      anon_sym_RBRACE,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [871] = 2,
    ACTIONS(263), 1,
      aux_sym_document_token1,
    ACTIONS(265), 5,
      anon_sym_RBRACE,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [882] = 2,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(269), 4,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [893] = 2,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(273), 4,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [904] = 2,
    ACTIONS(275), 1,
      aux_sym_document_token1,
    ACTIONS(277), 5,
      anon_sym_RBRACE,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [915] = 2,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(281), 4,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [926] = 2,
    ACTIONS(239), 1,
      aux_sym_document_token1,
    ACTIONS(241), 5,
      anon_sym_RBRACE,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [937] = 2,
    ACTIONS(279), 1,
      aux_sym_document_token1,
    ACTIONS(281), 5,
      anon_sym_RBRACE,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [948] = 2,
    ACTIONS(271), 1,
      aux_sym_document_token1,
    ACTIONS(273), 5,
      anon_sym_RBRACE,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [959] = 2,
    ACTIONS(267), 1,
      aux_sym_document_token1,
    ACTIONS(269), 5,
      anon_sym_RBRACE,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [970] = 2,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(285), 4,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [981] = 2,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(277), 4,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [992] = 2,
    ACTIONS(251), 1,
      aux_sym_document_token1,
    ACTIONS(253), 5,
      anon_sym_RBRACE,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [1003] = 2,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(289), 4,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [1014] = 2,
    ACTIONS(283), 1,
      aux_sym_document_token1,
    ACTIONS(285), 5,
      anon_sym_RBRACE,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [1025] = 2,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(265), 4,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [1036] = 2,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(261), 4,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [1047] = 2,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(257), 4,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [1058] = 2,
    ACTIONS(287), 1,
      aux_sym_document_token1,
    ACTIONS(289), 5,
      anon_sym_RBRACE,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [1069] = 2,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(249), 4,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [1080] = 2,
    ACTIONS(291), 1,
      aux_sym_document_token1,
    ACTIONS(293), 5,
      anon_sym_RBRACE,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [1091] = 2,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      aux_sym_document_token1,
    ACTIONS(293), 4,
      sym_node_comment_prefix,
      sym_bare_identifier,
      anon_sym_LPAREN,
      anon_sym_DQUOTE,
  [1102] = 5,
    ACTIONS(47), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(295), 1,
      aux_sym_document_token1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym__node_terminator,
    STATE(66), 1,
      sym_single_line_comment,
  [1118] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_bare_identifier,
    STATE(9), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(25), 1,
      sym__escaped_string,
  [1134] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_bare_identifier,
    STATE(3), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(25), 1,
      sym__escaped_string,
  [1150] = 5,
    ACTIONS(299), 1,
      sym_bare_identifier,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    STATE(109), 1,
      sym_string,
    STATE(112), 1,
      sym_identifier,
    STATE(118), 1,
      sym__escaped_string,
  [1166] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_bare_identifier,
    STATE(12), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(25), 1,
      sym__escaped_string,
  [1182] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(303), 1,
      aux_sym_document_token1,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      sym__node_terminator,
    STATE(71), 1,
      sym_single_line_comment,
  [1198] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(307), 1,
      aux_sym_document_token1,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym__node_terminator,
    STATE(71), 1,
      sym_single_line_comment,
  [1214] = 4,
    ACTIONS(311), 1,
      aux_sym_decimal_token1,
    STATE(32), 1,
      sym_integer,
    STATE(114), 1,
      sym_sign,
    ACTIONS(124), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1228] = 5,
    ACTIONS(47), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(313), 1,
      aux_sym_document_token1,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym__node_terminator,
    STATE(66), 1,
      sym_single_line_comment,
  [1244] = 5,
    ACTIONS(47), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(317), 1,
      aux_sym_document_token1,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_single_line_comment,
    STATE(68), 1,
      sym__node_terminator,
  [1260] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(321), 1,
      aux_sym_document_token1,
    ACTIONS(323), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      sym__node_terminator,
    STATE(71), 1,
      sym_single_line_comment,
  [1276] = 5,
    ACTIONS(47), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(325), 1,
      aux_sym_document_token1,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym__node_terminator,
    STATE(66), 1,
      sym_single_line_comment,
  [1292] = 5,
    ACTIONS(47), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(329), 1,
      aux_sym_document_token1,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_single_line_comment,
    STATE(69), 1,
      sym__node_terminator,
  [1308] = 5,
    ACTIONS(47), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(333), 1,
      aux_sym_document_token1,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_single_line_comment,
    STATE(70), 1,
      sym__node_terminator,
  [1324] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_bare_identifier,
    STATE(7), 1,
      sym_identifier,
    STATE(21), 1,
      sym_string,
    STATE(25), 1,
      sym__escaped_string,
  [1340] = 5,
    ACTIONS(299), 1,
      sym_bare_identifier,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      sym_identifier,
    STATE(109), 1,
      sym_string,
    STATE(118), 1,
      sym__escaped_string,
  [1356] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(337), 1,
      aux_sym_document_token1,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym__node_terminator,
    STATE(71), 1,
      sym_single_line_comment,
  [1372] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(341), 1,
      aux_sym_document_token1,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      sym__node_terminator,
    STATE(71), 1,
      sym_single_line_comment,
  [1388] = 5,
    ACTIONS(33), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(345), 1,
      aux_sym_document_token1,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym__node_terminator,
    STATE(71), 1,
      sym_single_line_comment,
  [1404] = 2,
    ACTIONS(349), 1,
      aux_sym_document_token1,
    ACTIONS(351), 2,
      anon_sym_SEMI,
      anon_sym_SLASH_SLASH,
  [1412] = 2,
    ACTIONS(353), 1,
      aux_sym_document_token1,
    ACTIONS(355), 2,
      anon_sym_SEMI,
      anon_sym_SLASH_SLASH,
  [1420] = 3,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(359), 1,
      sym__char,
    STATE(99), 1,
      aux_sym__escaped_string_repeat1,
  [1430] = 3,
    ACTIONS(361), 1,
      anon_sym_DQUOTE,
    ACTIONS(363), 1,
      sym__char,
    STATE(101), 1,
      aux_sym__escaped_string_repeat1,
  [1440] = 2,
    ACTIONS(365), 1,
      aux_sym_document_token1,
    ACTIONS(367), 2,
      anon_sym_SEMI,
      anon_sym_SLASH_SLASH,
  [1448] = 3,
    ACTIONS(363), 1,
      sym__char,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym__escaped_string_repeat1,
  [1458] = 3,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      sym__char,
    STATE(97), 1,
      aux_sym__escaped_string_repeat1,
  [1468] = 3,
    ACTIONS(375), 1,
      anon_sym_DQUOTE,
    ACTIONS(377), 1,
      sym__char,
    STATE(101), 1,
      aux_sym__escaped_string_repeat1,
  [1478] = 1,
    ACTIONS(237), 2,
      sym_bare_identifier,
      anon_sym_DQUOTE,
  [1483] = 1,
    ACTIONS(380), 1,
      aux_sym_decimal_token1,
  [1487] = 1,
    ACTIONS(382), 1,
      aux_sym_single_line_comment_token1,
  [1491] = 1,
    ACTIONS(384), 1,
      anon_sym_EQ,
  [1495] = 1,
    ACTIONS(386), 1,
      anon_sym_RPAREN,
  [1499] = 1,
    ACTIONS(388), 1,
      aux_sym_document_token1,
  [1503] = 1,
    ACTIONS(390), 1,
      aux_sym_decimal_token1,
  [1507] = 1,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
  [1511] = 1,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
  [1515] = 1,
    ACTIONS(394), 1,
      anon_sym_LBRACE,
  [1519] = 1,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
  [1523] = 1,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
  [1527] = 1,
    ACTIONS(398), 1,
      aux_sym_decimal_token1,
  [1531] = 1,
    ACTIONS(400), 1,
      aux_sym_document_token1,
  [1535] = 1,
    ACTIONS(402), 1,
      aux_sym_decimal_token1,
  [1539] = 1,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
  [1543] = 1,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
  [1547] = 1,
    ACTIONS(404), 1,
      aux_sym_single_line_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 29,
  [SMALL_STATE(17)] = 76,
  [SMALL_STATE(18)] = 98,
  [SMALL_STATE(19)] = 120,
  [SMALL_STATE(20)] = 146,
  [SMALL_STATE(21)] = 166,
  [SMALL_STATE(22)] = 186,
  [SMALL_STATE(23)] = 206,
  [SMALL_STATE(24)] = 228,
  [SMALL_STATE(25)] = 266,
  [SMALL_STATE(26)] = 286,
  [SMALL_STATE(27)] = 305,
  [SMALL_STATE(28)] = 324,
  [SMALL_STATE(29)] = 343,
  [SMALL_STATE(30)] = 362,
  [SMALL_STATE(31)] = 381,
  [SMALL_STATE(32)] = 400,
  [SMALL_STATE(33)] = 419,
  [SMALL_STATE(34)] = 438,
  [SMALL_STATE(35)] = 457,
  [SMALL_STATE(36)] = 476,
  [SMALL_STATE(37)] = 495,
  [SMALL_STATE(38)] = 530,
  [SMALL_STATE(39)] = 565,
  [SMALL_STATE(40)] = 600,
  [SMALL_STATE(41)] = 635,
  [SMALL_STATE(42)] = 670,
  [SMALL_STATE(43)] = 705,
  [SMALL_STATE(44)] = 740,
  [SMALL_STATE(45)] = 762,
  [SMALL_STATE(46)] = 784,
  [SMALL_STATE(47)] = 794,
  [SMALL_STATE(48)] = 805,
  [SMALL_STATE(49)] = 816,
  [SMALL_STATE(50)] = 827,
  [SMALL_STATE(51)] = 838,
  [SMALL_STATE(52)] = 849,
  [SMALL_STATE(53)] = 860,
  [SMALL_STATE(54)] = 871,
  [SMALL_STATE(55)] = 882,
  [SMALL_STATE(56)] = 893,
  [SMALL_STATE(57)] = 904,
  [SMALL_STATE(58)] = 915,
  [SMALL_STATE(59)] = 926,
  [SMALL_STATE(60)] = 937,
  [SMALL_STATE(61)] = 948,
  [SMALL_STATE(62)] = 959,
  [SMALL_STATE(63)] = 970,
  [SMALL_STATE(64)] = 981,
  [SMALL_STATE(65)] = 992,
  [SMALL_STATE(66)] = 1003,
  [SMALL_STATE(67)] = 1014,
  [SMALL_STATE(68)] = 1025,
  [SMALL_STATE(69)] = 1036,
  [SMALL_STATE(70)] = 1047,
  [SMALL_STATE(71)] = 1058,
  [SMALL_STATE(72)] = 1069,
  [SMALL_STATE(73)] = 1080,
  [SMALL_STATE(74)] = 1091,
  [SMALL_STATE(75)] = 1102,
  [SMALL_STATE(76)] = 1118,
  [SMALL_STATE(77)] = 1134,
  [SMALL_STATE(78)] = 1150,
  [SMALL_STATE(79)] = 1166,
  [SMALL_STATE(80)] = 1182,
  [SMALL_STATE(81)] = 1198,
  [SMALL_STATE(82)] = 1214,
  [SMALL_STATE(83)] = 1228,
  [SMALL_STATE(84)] = 1244,
  [SMALL_STATE(85)] = 1260,
  [SMALL_STATE(86)] = 1276,
  [SMALL_STATE(87)] = 1292,
  [SMALL_STATE(88)] = 1308,
  [SMALL_STATE(89)] = 1324,
  [SMALL_STATE(90)] = 1340,
  [SMALL_STATE(91)] = 1356,
  [SMALL_STATE(92)] = 1372,
  [SMALL_STATE(93)] = 1388,
  [SMALL_STATE(94)] = 1404,
  [SMALL_STATE(95)] = 1412,
  [SMALL_STATE(96)] = 1420,
  [SMALL_STATE(97)] = 1430,
  [SMALL_STATE(98)] = 1440,
  [SMALL_STATE(99)] = 1448,
  [SMALL_STATE(100)] = 1458,
  [SMALL_STATE(101)] = 1468,
  [SMALL_STATE(102)] = 1478,
  [SMALL_STATE(103)] = 1483,
  [SMALL_STATE(104)] = 1487,
  [SMALL_STATE(105)] = 1491,
  [SMALL_STATE(106)] = 1495,
  [SMALL_STATE(107)] = 1499,
  [SMALL_STATE(108)] = 1503,
  [SMALL_STATE(109)] = 1507,
  [SMALL_STATE(110)] = 1511,
  [SMALL_STATE(111)] = 1515,
  [SMALL_STATE(112)] = 1519,
  [SMALL_STATE(113)] = 1523,
  [SMALL_STATE(114)] = 1527,
  [SMALL_STATE(115)] = 1531,
  [SMALL_STATE(116)] = 1535,
  [SMALL_STATE(117)] = 1539,
  [SMALL_STATE(118)] = 1543,
  [SMALL_STATE(119)] = 1547,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(21),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(29),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(78),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(96),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(31),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(17),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(108),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_string, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escaped_string, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escaped_string, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prop, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exponent, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exponent, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 4),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 8),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 8),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, .production_id = 13),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, .production_id = 13),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 12),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 12),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, .production_id = 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 11),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 11),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, .production_id = 10),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, .production_id = 10),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 9),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 9),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 5),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, .production_id = 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 6),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 6),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_line_comment, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, .production_id = 7),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, .production_id = 7),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, .production_id = 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, .production_id = 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node_terminator, 1, .production_id = 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node_terminator, 1, .production_id = 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2, .production_id = 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_block, 4),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_block, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_block, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_block, 3),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_block, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_block, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__escaped_string_repeat1, 2),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__escaped_string_repeat1, 2), SHIFT_REPEAT(101),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sign, 1),
  [392] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kdl(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
