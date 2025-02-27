#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 172
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_typ = 2,
  anon_sym_EQ = 3,
  anon_sym_var = 4,
  anon_sym_COLON = 5,
  anon_sym_fun = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_return = 10,
  anon_sym_while = 11,
  anon_sym_do = 12,
  anon_sym_end = 13,
  anon_sym_if = 14,
  anon_sym_then = 15,
  anon_sym_else = 16,
  anon_sym_let = 17,
  anon_sym_in = 18,
  anon_sym_int = 19,
  anon_sym_char = 20,
  anon_sym_bool = 21,
  anon_sym_void = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  anon_sym_CARET = 25,
  anon_sym_LT = 26,
  anon_sym_GT = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_PIPE = 30,
  anon_sym_AMP = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_BANG_EQ = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_GT_EQ = 35,
  anon_sym_PLUS = 36,
  anon_sym_DASH = 37,
  anon_sym_STAR = 38,
  anon_sym_SLASH = 39,
  anon_sym_PERCENT = 40,
  anon_sym_BANG = 41,
  anon_sym_DOT = 42,
  anon_sym_true = 43,
  anon_sym_false = 44,
  anon_sym_null = 45,
  anon_sym_sizeof = 46,
  sym_int_const = 47,
  anon_sym_SQUOTE = 48,
  aux_sym_char_const_token1 = 49,
  anon_sym_BSLASH_BSLASH = 50,
  anon_sym_BSLASH_SQUOTE = 51,
  aux_sym_char_const_token2 = 52,
  anon_sym_DQUOTE = 53,
  aux_sym_str_const_token1 = 54,
  anon_sym_BSLASH_DQUOTE = 55,
  sym_ident = 56,
  sym_source = 57,
  sym_def = 58,
  sym_id_colon_type = 59,
  sym_stmts = 60,
  sym_stmt = 61,
  sym_type = 62,
  sym__expr = 63,
  sym_or_expr = 64,
  sym_and_expr = 65,
  sym_comp_expr = 66,
  sym_add_expr = 67,
  sym_mul_expr = 68,
  sym_prefix_expr = 69,
  sym_postfix_expr = 70,
  sym_const_expr = 71,
  sym_char_const = 72,
  sym_str_const = 73,
  aux_sym_source_repeat1 = 74,
  aux_sym_id_colon_type_repeat1 = 75,
  aux_sym_type_repeat1 = 76,
  aux_sym_postfix_expr_repeat1 = 77,
  aux_sym_str_const_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_typ] = "typ",
  [anon_sym_EQ] = "=",
  [anon_sym_var] = "var",
  [anon_sym_COLON] = ":",
  [anon_sym_fun] = "fun",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_return] = "return",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_end] = "end",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_int] = "int",
  [anon_sym_char] = "char",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_CARET] = "^",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [anon_sym_sizeof] = "sizeof",
  [sym_int_const] = "int_const",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_const_token1] = "char_const_token1",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_BSLASH_SQUOTE] = "\\'",
  [aux_sym_char_const_token2] = "char_const_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_str_const_token1] = "str_const_token1",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [sym_ident] = "ident",
  [sym_source] = "source",
  [sym_def] = "def",
  [sym_id_colon_type] = "id_colon_type",
  [sym_stmts] = "stmts",
  [sym_stmt] = "stmt",
  [sym_type] = "type",
  [sym__expr] = "_expr",
  [sym_or_expr] = "or_expr",
  [sym_and_expr] = "and_expr",
  [sym_comp_expr] = "comp_expr",
  [sym_add_expr] = "add_expr",
  [sym_mul_expr] = "mul_expr",
  [sym_prefix_expr] = "prefix_expr",
  [sym_postfix_expr] = "postfix_expr",
  [sym_const_expr] = "const_expr",
  [sym_char_const] = "char_const",
  [sym_str_const] = "str_const",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_id_colon_type_repeat1] = "id_colon_type_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_postfix_expr_repeat1] = "postfix_expr_repeat1",
  [aux_sym_str_const_repeat1] = "str_const_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_typ] = anon_sym_typ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_sizeof] = anon_sym_sizeof,
  [sym_int_const] = sym_int_const,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_const_token1] = aux_sym_char_const_token1,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_BSLASH_SQUOTE] = anon_sym_BSLASH_SQUOTE,
  [aux_sym_char_const_token2] = aux_sym_char_const_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_str_const_token1] = aux_sym_str_const_token1,
  [anon_sym_BSLASH_DQUOTE] = anon_sym_BSLASH_DQUOTE,
  [sym_ident] = sym_ident,
  [sym_source] = sym_source,
  [sym_def] = sym_def,
  [sym_id_colon_type] = sym_id_colon_type,
  [sym_stmts] = sym_stmts,
  [sym_stmt] = sym_stmt,
  [sym_type] = sym_type,
  [sym__expr] = sym__expr,
  [sym_or_expr] = sym_or_expr,
  [sym_and_expr] = sym_and_expr,
  [sym_comp_expr] = sym_comp_expr,
  [sym_add_expr] = sym_add_expr,
  [sym_mul_expr] = sym_mul_expr,
  [sym_prefix_expr] = sym_prefix_expr,
  [sym_postfix_expr] = sym_postfix_expr,
  [sym_const_expr] = sym_const_expr,
  [sym_char_const] = sym_char_const,
  [sym_str_const] = sym_str_const,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_id_colon_type_repeat1] = aux_sym_id_colon_type_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_postfix_expr_repeat1] = aux_sym_postfix_expr_repeat1,
  [aux_sym_str_const_repeat1] = aux_sym_str_const_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_typ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
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
  [anon_sym_return] = {
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
  [anon_sym_end] = {
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
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sizeof] = {
    .visible = true,
    .named = false,
  },
  [sym_int_const] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_const_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_const_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_str_const_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_id_colon_type] = {
    .visible = true,
    .named = true,
  },
  [sym_stmts] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_or_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_and_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_comp_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_add_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_mul_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_postfix_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_const_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_char_const] = {
    .visible = true,
    .named = true,
  },
  [sym_str_const] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_id_colon_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_postfix_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_str_const_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [4] = 3,
  [5] = 2,
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
  [58] = 57,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 63,
  [68] = 62,
  [69] = 69,
  [70] = 70,
  [71] = 66,
  [72] = 72,
  [73] = 73,
  [74] = 65,
  [75] = 70,
  [76] = 61,
  [77] = 24,
  [78] = 23,
  [79] = 26,
  [80] = 27,
  [81] = 29,
  [82] = 25,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 92,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 104,
  [107] = 107,
  [108] = 108,
  [109] = 100,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 118,
  [120] = 112,
  [121] = 116,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 122,
  [127] = 127,
  [128] = 127,
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
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 139,
  [149] = 149,
  [150] = 143,
  [151] = 144,
  [152] = 132,
  [153] = 153,
  [154] = 153,
  [155] = 155,
  [156] = 156,
  [157] = 137,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 149,
  [165] = 160,
  [166] = 166,
  [167] = 138,
  [168] = 158,
  [169] = 136,
  [170] = 170,
  [171] = 141,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(71);
      ADVANCE_MAP(
        '!', 129,
        '"', 146,
        '#', 72,
        '%', 127,
        '&', 118,
        '\'', 140,
        '(', 82,
        ')', 83,
        '*', 125,
        '+', 123,
        ',', 84,
        '-', 124,
        '.', 130,
        '/', 126,
        ':', 79,
        '<', 112,
        '=', 76,
        '>', 114,
        '[', 108,
        '\\', 7,
        ']', 109,
        '^', 110,
        'b', 49,
        'c', 30,
        'd', 47,
        'e', 37,
        'f', 14,
        'i', 28,
        'l', 20,
        'n', 60,
        'r', 26,
        's', 34,
        't', 31,
        'v', 16,
        'w', 33,
        '{', 115,
        '|', 117,
        '}', 116,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 128,
        '"', 146,
        '#', 72,
        '\'', 140,
        '(', 82,
        ')', 83,
        '+', 123,
        '-', 124,
        '^', 110,
        'f', 151,
        'n', 196,
        's', 168,
        't', 189,
        '{', 115,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 128,
        '"', 146,
        '#', 72,
        '\'', 140,
        '(', 82,
        '+', 123,
        '-', 124,
        '^', 110,
        'e', 176,
        'f', 151,
        'i', 164,
        'l', 156,
        'n', 196,
        'r', 162,
        's', 168,
        't', 189,
        'w', 166,
        '{', 115,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 128,
        '"', 146,
        '#', 72,
        '\'', 140,
        '(', 82,
        '+', 123,
        '-', 124,
        '^', 110,
        'e', 179,
        'f', 151,
        'i', 164,
        'l', 156,
        'n', 196,
        'r', 162,
        's', 168,
        't', 189,
        'w', 166,
        '{', 115,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 128,
        '"', 146,
        '#', 72,
        '\'', 140,
        '(', 82,
        '+', 123,
        '-', 124,
        '^', 110,
        'f', 150,
        'i', 163,
        'l', 156,
        'n', 196,
        'r', 162,
        's', 168,
        't', 188,
        'v', 152,
        'w', 166,
        '{', 115,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '!', 128,
        '"', 146,
        '#', 72,
        '\'', 140,
        '(', 82,
        '+', 123,
        '-', 124,
        '^', 110,
        'f', 151,
        'i', 164,
        'l', 156,
        'n', 196,
        'r', 162,
        's', 168,
        't', 189,
        'w', 166,
        '{', 115,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(149);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(149);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(143);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '#', 72,
        '(', 82,
        ')', 83,
        '<', 111,
        '[', 108,
        '^', 110,
        'b', 183,
        'c', 167,
        'i', 180,
        'v', 182,
        '{', 115,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(141);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(143);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(62);
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(25);
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 63:
      if (lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 65:
      if (lookahead == 'z') ADVANCE(27);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(145);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(66);
      END_STATE();
    case 68:
      if (eof) ADVANCE(71);
      ADVANCE_MAP(
        '!', 128,
        '"', 146,
        '#', 72,
        '\'', 140,
        '(', 82,
        ')', 83,
        '+', 123,
        ',', 84,
        '-', 124,
        '>', 113,
        '^', 110,
        'f', 150,
        'i', 164,
        'l', 156,
        'n', 196,
        'r', 162,
        's', 168,
        't', 188,
        'v', 152,
        'w', 166,
        '{', 115,
        '}', 116,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 69:
      if (eof) ADVANCE(71);
      ADVANCE_MAP(
        '!', 13,
        '#', 72,
        '%', 127,
        '&', 118,
        '(', 82,
        ')', 83,
        '*', 125,
        '+', 123,
        ',', 84,
        '-', 124,
        '.', 130,
        '/', 126,
        ':', 79,
        '<', 112,
        '=', 76,
        '>', 114,
        '[', 108,
        ']', 109,
        '^', 110,
        'd', 47,
        'e', 37,
        'f', 59,
        'i', 43,
        't', 32,
        'v', 15,
        '|', 117,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(69);
      END_STATE();
    case 70:
      if (eof) ADVANCE(71);
      ADVANCE_MAP(
        '#', 72,
        ')', 83,
        ',', 84,
        '=', 75,
        '>', 113,
        'f', 59,
        'i', 43,
        't', 64,
        'v', 15,
        '}', 116,
      );
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_typ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_typ);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_char);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_sizeof);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_sizeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_char_const_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_char_const_token1);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_char_const_token2);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_str_const_token1);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_str_const_token1);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'd') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'h') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == 'y') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'z') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 68},
  [3] = {.lex_state = 68},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 69},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 69},
  [14] = {.lex_state = 69},
  [15] = {.lex_state = 69},
  [16] = {.lex_state = 69},
  [17] = {.lex_state = 69},
  [18] = {.lex_state = 69},
  [19] = {.lex_state = 69},
  [20] = {.lex_state = 69},
  [21] = {.lex_state = 69},
  [22] = {.lex_state = 69},
  [23] = {.lex_state = 69},
  [24] = {.lex_state = 69},
  [25] = {.lex_state = 69},
  [26] = {.lex_state = 69},
  [27] = {.lex_state = 69},
  [28] = {.lex_state = 69},
  [29] = {.lex_state = 69},
  [30] = {.lex_state = 69},
  [31] = {.lex_state = 69},
  [32] = {.lex_state = 69},
  [33] = {.lex_state = 69},
  [34] = {.lex_state = 69},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 69},
  [45] = {.lex_state = 69},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 69},
  [48] = {.lex_state = 69},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 70},
  [78] = {.lex_state = 70},
  [79] = {.lex_state = 70},
  [80] = {.lex_state = 70},
  [81] = {.lex_state = 70},
  [82] = {.lex_state = 70},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 68},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 68},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 68},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 68},
  [111] = {.lex_state = 11},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 68},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 68},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_typ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_sizeof] = ACTIONS(1),
    [sym_int_const] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [aux_sym_char_const_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(140),
    [sym_def] = STATE(97),
    [aux_sym_source_repeat1] = STATE(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_typ] = ACTIONS(5),
    [anon_sym_var] = ACTIONS(7),
    [anon_sym_fun] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(83), 1,
      sym__expr,
    STATE(88), 1,
      sym_stmt,
    STATE(107), 1,
      sym_stmts,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(13), 3,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [91] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(83), 1,
      sym__expr,
    STATE(88), 1,
      sym_stmt,
    STATE(102), 1,
      sym_stmts,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(41), 3,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [182] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(83), 1,
      sym__expr,
    STATE(88), 1,
      sym_stmt,
    STATE(102), 1,
      sym_stmts,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
    ACTIONS(41), 4,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_in,
  [271] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(83), 1,
      sym__expr,
    STATE(88), 1,
      sym_stmt,
    STATE(107), 1,
      sym_stmts,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(13), 4,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_in,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [360] = 27,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_end,
    ACTIONS(45), 1,
      anon_sym_else,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(83), 1,
      sym__expr,
    STATE(88), 1,
      sym_stmt,
    STATE(123), 1,
      sym_stmts,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [449] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_end,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(83), 1,
      sym__expr,
    STATE(88), 1,
      sym_stmt,
    STATE(147), 1,
      sym_stmts,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [535] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_end,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(83), 1,
      sym__expr,
    STATE(88), 1,
      sym_stmt,
    STATE(134), 1,
      sym_stmts,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [621] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_end,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(83), 1,
      sym__expr,
    STATE(88), 1,
      sym_stmt,
    STATE(161), 1,
      sym_stmts,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [746] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(83), 1,
      sym__expr,
    STATE(88), 1,
      sym_stmt,
    STATE(91), 1,
      sym_stmts,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [829] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_while,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(83), 1,
      sym__expr,
    STATE(88), 1,
      sym_stmt,
    STATE(161), 1,
      sym_stmts,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [990] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(73), 1,
      anon_sym_DOT,
    ACTIONS(65), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 24,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [1076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [1115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [1154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [1193] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [1232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [1271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [1310] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [1349] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [1388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [1427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [1466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [1505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [1544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 28,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_DOT,
  [1583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 24,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(135), 21,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1655] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(143), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 21,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 24,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 24,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1762] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(114), 1,
      sym__expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [1830] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(155), 1,
      sym__expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [1895] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(146), 1,
      sym__expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [1960] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(163), 1,
      sym__expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [2025] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(90), 1,
      sym__expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [2090] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(162), 1,
      sym__expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [2155] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(166), 1,
      sym__expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [2220] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(124), 1,
      sym__expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [2285] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(55), 1,
      sym_and_expr,
    STATE(56), 1,
      sym_or_expr,
    STATE(84), 1,
      sym__expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [2350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 19,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(163), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 19,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2418] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(48), 1,
      sym_comp_expr,
    STATE(54), 1,
      sym_and_expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [2477] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_EQ,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(165), 15,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
  [2511] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_EQ,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 15,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
  [2545] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(45), 1,
      sym_add_expr,
    STATE(47), 1,
      sym_comp_expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [2601] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(31), 1,
      sym_mul_expr,
    STATE(44), 1,
      sym_add_expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [2654] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(30), 1,
      sym_prefix_expr,
    STATE(32), 1,
      sym_mul_expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [2704] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(33), 1,
      sym_prefix_expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [2751] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_sizeof,
    ACTIONS(33), 1,
      sym_int_const,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(15), 1,
      sym_postfix_expr,
    STATE(19), 1,
      sym_const_expr,
    STATE(34), 1,
      sym_prefix_expr,
    STATE(21), 2,
      sym_char_const,
      sym_str_const,
    ACTIONS(25), 4,
      anon_sym_CARET,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(29), 4,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      sym_ident,
  [2798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_AMP,
    ACTIONS(177), 15,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_EQ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [2822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_AMP,
    ACTIONS(181), 15,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_EQ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [2846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_PIPE,
    ACTIONS(183), 14,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_EQ,
      anon_sym_var,
      anon_sym_COLON,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_do,
      anon_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_in,
      anon_sym_RBRACK,
  [2869] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(189), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [2901] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [2933] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [2962] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [2991] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3020] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3049] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_CARET,
    ACTIONS(211), 1,
      anon_sym_LT,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_type,
    ACTIONS(205), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3078] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3107] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_CARET,
    ACTIONS(211), 1,
      anon_sym_LT,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_type,
    ACTIONS(205), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3136] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3165] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3194] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_CARET,
    ACTIONS(211), 1,
      anon_sym_LT,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_type,
    ACTIONS(205), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3223] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3252] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3281] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_CARET,
    ACTIONS(211), 1,
      anon_sym_LT,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_type,
    ACTIONS(205), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3310] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3339] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_CARET,
    ACTIONS(211), 1,
      anon_sym_LT,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_type,
    ACTIONS(205), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3368] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3397] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3426] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_type,
    ACTIONS(191), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_void,
      sym_ident,
  [3455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 10,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_EQ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_RBRACE,
  [3471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 10,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_EQ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_RBRACE,
  [3487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 10,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_EQ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_RBRACE,
  [3503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 10,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_EQ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_RBRACE,
  [3519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 10,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_EQ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_RBRACE,
  [3535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 10,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_EQ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_GT,
      anon_sym_RBRACE,
  [3551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_EQ,
    ACTIONS(215), 8,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_COMMA,
      anon_sym_end,
      anon_sym_else,
      anon_sym_in,
  [3568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 8,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_COMMA,
      anon_sym_end,
      anon_sym_else,
      anon_sym_in,
  [3582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 8,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_COMMA,
      anon_sym_end,
      anon_sym_else,
      anon_sym_in,
  [3596] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_COMMA,
      anon_sym_end,
      anon_sym_else,
      anon_sym_in,
  [3610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 8,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_COMMA,
      anon_sym_end,
      anon_sym_else,
      anon_sym_in,
  [3624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_end,
      anon_sym_else,
      anon_sym_in,
  [3640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 8,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_COMMA,
      anon_sym_end,
      anon_sym_else,
      anon_sym_in,
  [3654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 8,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_COMMA,
      anon_sym_end,
      anon_sym_else,
      anon_sym_in,
  [3668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 7,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_end,
      anon_sym_else,
      anon_sym_in,
  [3681] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_typ,
    ACTIONS(240), 1,
      anon_sym_var,
    ACTIONS(243), 1,
      anon_sym_fun,
    ACTIONS(246), 1,
      anon_sym_in,
    STATE(92), 2,
      sym_def,
      aux_sym_source_repeat1,
  [3701] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_typ,
    ACTIONS(7), 1,
      anon_sym_var,
    ACTIONS(248), 1,
      anon_sym_fun,
    ACTIONS(250), 1,
      anon_sym_in,
    STATE(92), 2,
      sym_def,
      aux_sym_source_repeat1,
  [3721] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_typ,
    ACTIONS(240), 1,
      anon_sym_var,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      anon_sym_fun,
    STATE(94), 2,
      sym_def,
      aux_sym_source_repeat1,
  [3741] = 4,
    ACTIONS(255), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      aux_sym_str_const_repeat1,
    ACTIONS(257), 4,
      anon_sym_BSLASH_BSLASH,
      aux_sym_char_const_token2,
      aux_sym_str_const_token1,
      anon_sym_BSLASH_DQUOTE,
  [3757] = 4,
    ACTIONS(255), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      aux_sym_str_const_repeat1,
    ACTIONS(262), 4,
      anon_sym_BSLASH_BSLASH,
      aux_sym_char_const_token2,
      aux_sym_str_const_token1,
      anon_sym_BSLASH_DQUOTE,
  [3773] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_typ,
    ACTIONS(7), 1,
      anon_sym_var,
    ACTIONS(9), 1,
      anon_sym_fun,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    STATE(94), 2,
      sym_def,
      aux_sym_source_repeat1,
  [3793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_id_colon_type_repeat1,
    ACTIONS(268), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_RBRACE,
  [3808] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_typ,
    ACTIONS(7), 1,
      anon_sym_var,
    ACTIONS(248), 1,
      anon_sym_fun,
    STATE(93), 2,
      sym_def,
      aux_sym_source_repeat1,
  [3825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_EQ,
    ACTIONS(272), 4,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
  [3838] = 3,
    ACTIONS(255), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_str_const_repeat1,
    ACTIONS(276), 4,
      anon_sym_BSLASH_BSLASH,
      aux_sym_char_const_token2,
      aux_sym_str_const_token1,
      anon_sym_BSLASH_DQUOTE,
  [3851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 5,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_in,
  [3862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 5,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_in,
  [3873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(39), 4,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_in,
  [3886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_id_colon_type_repeat1,
    ACTIONS(282), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_RBRACE,
  [3901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      anon_sym_EQ,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
  [3914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 5,
      ts_builtin_sym_end,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_in,
  [3925] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_id_colon_type_repeat1,
    ACTIONS(288), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      anon_sym_RBRACE,
  [3940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_EQ,
    ACTIONS(272), 4,
      anon_sym_typ,
      anon_sym_var,
      anon_sym_fun,
      anon_sym_in,
  [3953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_GT,
      anon_sym_RBRACE,
  [3963] = 2,
    ACTIONS(255), 1,
      sym_comment,
    ACTIONS(297), 4,
      aux_sym_char_const_token1,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_SQUOTE,
      aux_sym_char_const_token2,
  [3973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_type_repeat1,
  [3986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_postfix_expr_repeat1,
  [3999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_postfix_expr_repeat1,
  [4012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_postfix_expr_repeat1,
  [4025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    ACTIONS(316), 1,
      sym_ident,
    STATE(138), 1,
      sym_id_colon_type,
  [4038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_type_repeat1,
  [4051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_type_repeat1,
  [4064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_type_repeat1,
  [4077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_type_repeat1,
  [4090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_ident,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      sym_id_colon_type,
  [4103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_ident,
    STATE(150), 1,
      sym_id_colon_type,
  [4113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_end,
    ACTIONS(333), 1,
      anon_sym_else,
  [4123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_ident,
    STATE(143), 1,
      sym_id_colon_type,
  [4149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_ident,
    STATE(144), 1,
      sym_id_colon_type,
  [4159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym_ident,
    STATE(151), 1,
      sym_id_colon_type,
  [4169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_COLON,
  [4176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_COLON,
  [4183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_ident,
  [4190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_COLON,
  [4197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_ident,
  [4204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_end,
  [4211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_ident,
  [4218] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_ident,
  [4225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_int_const,
  [4232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
  [4239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COLON,
  [4246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
  [4253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
  [4260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COLON,
  [4267] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_GT,
  [4274] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
  [4281] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_ident,
  [4288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_do,
  [4295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_end,
  [4302] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_COLON,
  [4309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_COLON,
  [4316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_GT,
  [4323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
  [4330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COLON,
  [4337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COLON,
  [4344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_COLON,
  [4351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
  [4358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_EQ,
  [4365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_int_const,
  [4372] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
  [4379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
  [4386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_COLON,
  [4393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_end,
  [4400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_COLON,
  [4407] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
  [4414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_COLON,
  [4421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_COLON,
  [4428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_then,
  [4435] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
  [4442] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
  [4449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_ident,
  [4456] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
  [4463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 271,
  [SMALL_STATE(6)] = 360,
  [SMALL_STATE(7)] = 449,
  [SMALL_STATE(8)] = 535,
  [SMALL_STATE(9)] = 621,
  [SMALL_STATE(10)] = 707,
  [SMALL_STATE(11)] = 746,
  [SMALL_STATE(12)] = 829,
  [SMALL_STATE(13)] = 912,
  [SMALL_STATE(14)] = 951,
  [SMALL_STATE(15)] = 990,
  [SMALL_STATE(16)] = 1037,
  [SMALL_STATE(17)] = 1076,
  [SMALL_STATE(18)] = 1115,
  [SMALL_STATE(19)] = 1154,
  [SMALL_STATE(20)] = 1193,
  [SMALL_STATE(21)] = 1232,
  [SMALL_STATE(22)] = 1271,
  [SMALL_STATE(23)] = 1310,
  [SMALL_STATE(24)] = 1349,
  [SMALL_STATE(25)] = 1388,
  [SMALL_STATE(26)] = 1427,
  [SMALL_STATE(27)] = 1466,
  [SMALL_STATE(28)] = 1505,
  [SMALL_STATE(29)] = 1544,
  [SMALL_STATE(30)] = 1583,
  [SMALL_STATE(31)] = 1618,
  [SMALL_STATE(32)] = 1655,
  [SMALL_STATE(33)] = 1692,
  [SMALL_STATE(34)] = 1727,
  [SMALL_STATE(35)] = 1762,
  [SMALL_STATE(36)] = 1830,
  [SMALL_STATE(37)] = 1895,
  [SMALL_STATE(38)] = 1960,
  [SMALL_STATE(39)] = 2025,
  [SMALL_STATE(40)] = 2090,
  [SMALL_STATE(41)] = 2155,
  [SMALL_STATE(42)] = 2220,
  [SMALL_STATE(43)] = 2285,
  [SMALL_STATE(44)] = 2350,
  [SMALL_STATE(45)] = 2384,
  [SMALL_STATE(46)] = 2418,
  [SMALL_STATE(47)] = 2477,
  [SMALL_STATE(48)] = 2511,
  [SMALL_STATE(49)] = 2545,
  [SMALL_STATE(50)] = 2601,
  [SMALL_STATE(51)] = 2654,
  [SMALL_STATE(52)] = 2704,
  [SMALL_STATE(53)] = 2751,
  [SMALL_STATE(54)] = 2798,
  [SMALL_STATE(55)] = 2822,
  [SMALL_STATE(56)] = 2846,
  [SMALL_STATE(57)] = 2869,
  [SMALL_STATE(58)] = 2901,
  [SMALL_STATE(59)] = 2933,
  [SMALL_STATE(60)] = 2962,
  [SMALL_STATE(61)] = 2991,
  [SMALL_STATE(62)] = 3020,
  [SMALL_STATE(63)] = 3049,
  [SMALL_STATE(64)] = 3078,
  [SMALL_STATE(65)] = 3107,
  [SMALL_STATE(66)] = 3136,
  [SMALL_STATE(67)] = 3165,
  [SMALL_STATE(68)] = 3194,
  [SMALL_STATE(69)] = 3223,
  [SMALL_STATE(70)] = 3252,
  [SMALL_STATE(71)] = 3281,
  [SMALL_STATE(72)] = 3310,
  [SMALL_STATE(73)] = 3339,
  [SMALL_STATE(74)] = 3368,
  [SMALL_STATE(75)] = 3397,
  [SMALL_STATE(76)] = 3426,
  [SMALL_STATE(77)] = 3455,
  [SMALL_STATE(78)] = 3471,
  [SMALL_STATE(79)] = 3487,
  [SMALL_STATE(80)] = 3503,
  [SMALL_STATE(81)] = 3519,
  [SMALL_STATE(82)] = 3535,
  [SMALL_STATE(83)] = 3551,
  [SMALL_STATE(84)] = 3568,
  [SMALL_STATE(85)] = 3582,
  [SMALL_STATE(86)] = 3596,
  [SMALL_STATE(87)] = 3610,
  [SMALL_STATE(88)] = 3624,
  [SMALL_STATE(89)] = 3640,
  [SMALL_STATE(90)] = 3654,
  [SMALL_STATE(91)] = 3668,
  [SMALL_STATE(92)] = 3681,
  [SMALL_STATE(93)] = 3701,
  [SMALL_STATE(94)] = 3721,
  [SMALL_STATE(95)] = 3741,
  [SMALL_STATE(96)] = 3757,
  [SMALL_STATE(97)] = 3773,
  [SMALL_STATE(98)] = 3793,
  [SMALL_STATE(99)] = 3808,
  [SMALL_STATE(100)] = 3825,
  [SMALL_STATE(101)] = 3838,
  [SMALL_STATE(102)] = 3851,
  [SMALL_STATE(103)] = 3862,
  [SMALL_STATE(104)] = 3873,
  [SMALL_STATE(105)] = 3886,
  [SMALL_STATE(106)] = 3901,
  [SMALL_STATE(107)] = 3914,
  [SMALL_STATE(108)] = 3925,
  [SMALL_STATE(109)] = 3940,
  [SMALL_STATE(110)] = 3953,
  [SMALL_STATE(111)] = 3963,
  [SMALL_STATE(112)] = 3973,
  [SMALL_STATE(113)] = 3986,
  [SMALL_STATE(114)] = 3999,
  [SMALL_STATE(115)] = 4012,
  [SMALL_STATE(116)] = 4025,
  [SMALL_STATE(117)] = 4038,
  [SMALL_STATE(118)] = 4051,
  [SMALL_STATE(119)] = 4064,
  [SMALL_STATE(120)] = 4077,
  [SMALL_STATE(121)] = 4090,
  [SMALL_STATE(122)] = 4103,
  [SMALL_STATE(123)] = 4113,
  [SMALL_STATE(124)] = 4123,
  [SMALL_STATE(125)] = 4131,
  [SMALL_STATE(126)] = 4139,
  [SMALL_STATE(127)] = 4149,
  [SMALL_STATE(128)] = 4159,
  [SMALL_STATE(129)] = 4169,
  [SMALL_STATE(130)] = 4176,
  [SMALL_STATE(131)] = 4183,
  [SMALL_STATE(132)] = 4190,
  [SMALL_STATE(133)] = 4197,
  [SMALL_STATE(134)] = 4204,
  [SMALL_STATE(135)] = 4211,
  [SMALL_STATE(136)] = 4218,
  [SMALL_STATE(137)] = 4225,
  [SMALL_STATE(138)] = 4232,
  [SMALL_STATE(139)] = 4239,
  [SMALL_STATE(140)] = 4246,
  [SMALL_STATE(141)] = 4253,
  [SMALL_STATE(142)] = 4260,
  [SMALL_STATE(143)] = 4267,
  [SMALL_STATE(144)] = 4274,
  [SMALL_STATE(145)] = 4281,
  [SMALL_STATE(146)] = 4288,
  [SMALL_STATE(147)] = 4295,
  [SMALL_STATE(148)] = 4302,
  [SMALL_STATE(149)] = 4309,
  [SMALL_STATE(150)] = 4316,
  [SMALL_STATE(151)] = 4323,
  [SMALL_STATE(152)] = 4330,
  [SMALL_STATE(153)] = 4337,
  [SMALL_STATE(154)] = 4344,
  [SMALL_STATE(155)] = 4351,
  [SMALL_STATE(156)] = 4358,
  [SMALL_STATE(157)] = 4365,
  [SMALL_STATE(158)] = 4372,
  [SMALL_STATE(159)] = 4379,
  [SMALL_STATE(160)] = 4386,
  [SMALL_STATE(161)] = 4393,
  [SMALL_STATE(162)] = 4400,
  [SMALL_STATE(163)] = 4407,
  [SMALL_STATE(164)] = 4414,
  [SMALL_STATE(165)] = 4421,
  [SMALL_STATE(166)] = 4428,
  [SMALL_STATE(167)] = 4435,
  [SMALL_STATE(168)] = 4442,
  [SMALL_STATE(169)] = 4449,
  [SMALL_STATE(170)] = 4456,
  [SMALL_STATE(171)] = 4463,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 8, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 8, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 7, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 7, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_expr, 5, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postfix_expr, 5, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expr, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_expr, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_expr, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postfix_expr, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_expr, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_expr, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_const, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_const, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_str_const, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_str_const, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_expr, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postfix_expr, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_expr, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postfix_expr, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_expr, 4, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postfix_expr, 4, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expr, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_expr, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expr, 5, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_expr, 5, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 6, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 4, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expr, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_expr, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 5, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul_expr, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mul_expr, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_expr, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_add_expr, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul_expr, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mul_expr, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_expr, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_expr, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comp_expr, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comp_expr, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comp_expr, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comp_expr, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and_expr, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and_expr, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or_expr, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 4, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 5, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 7, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmts, 1, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 6, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 2, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmts, 3, 0, 0),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_str_const_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_str_const_repeat1, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_colon_type, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 6, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 4, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id_colon_type, 4, 0, 0),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 9, 0, 0),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_colon_type_repeat1, 2, 0, 0),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_colon_type_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_colon_type_repeat1, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postfix_expr_repeat1, 2, 0, 0),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postfix_expr_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [357] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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

TS_PUBLIC const TSLanguage *tree_sitter_prev25(void) {
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
