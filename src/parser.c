#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 11

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DQUOTE = 7,
  sym_string_content = 8,
  sym_escape_sequence = 9,
  sym_number = 10,
  sym_true = 11,
  sym_false = 12,
  sym_null = 13,
  anon_sym_DQUOTEcompartments_configuration_DQUOTE_COLON = 14,
  anon_sym_DQUOTEenable_delete_DQUOTE_COLON = 15,
  anon_sym_DQUOTEcompartments_DQUOTE = 16,
  anon_sym_DQUOTE_COLON = 17,
  anon_sym_DQUOTEname_DQUOTE_COLON = 18,
  anon_sym_DQUOTEdescription_DQUOTE_COLON = 19,
  anon_sym_DQUOTEchildren_DQUOTE_COLON = 20,
  sym_groupsConfiguration = 21,
  sym_dynamicGroupsConfiguration = 22,
  sym_policiesConfiguration = 23,
  sym_comment = 24,
  sym_document = 25,
  sym__lzRootStatement = 26,
  sym_string = 27,
  aux_sym__string_content = 28,
  sym_bool = 29,
  sym_compartmentConfiguration = 30,
  sym_compartmentConfigurationObject = 31,
  sym_compartments = 32,
  sym_compartment = 33,
  aux_sym_document_repeat1 = 34,
  aux_sym_compartmentConfigurationObject_repeat1 = 35,
  aux_sym_compartments_repeat1 = 36,
  aux_sym_compartment_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [anon_sym_DQUOTEcompartments_configuration_DQUOTE_COLON] = "\"compartments_configuration\":",
  [anon_sym_DQUOTEenable_delete_DQUOTE_COLON] = "\"enable_delete\":",
  [anon_sym_DQUOTEcompartments_DQUOTE] = "\"compartments\"",
  [anon_sym_DQUOTE_COLON] = "\":",
  [anon_sym_DQUOTEname_DQUOTE_COLON] = "\"name\":",
  [anon_sym_DQUOTEdescription_DQUOTE_COLON] = "\"description\":",
  [anon_sym_DQUOTEchildren_DQUOTE_COLON] = "\"children\":",
  [sym_groupsConfiguration] = "groupsConfiguration",
  [sym_dynamicGroupsConfiguration] = "dynamicGroupsConfiguration",
  [sym_policiesConfiguration] = "policiesConfiguration",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__lzRootStatement] = "_lzRootStatement",
  [sym_string] = "string",
  [aux_sym__string_content] = "_string_content",
  [sym_bool] = "bool",
  [sym_compartmentConfiguration] = "compartmentConfiguration",
  [sym_compartmentConfigurationObject] = "compartmentConfigurationObject",
  [sym_compartments] = "compartments",
  [sym_compartment] = "compartment",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_compartmentConfigurationObject_repeat1] = "compartmentConfigurationObject_repeat1",
  [aux_sym_compartments_repeat1] = "compartments_repeat1",
  [aux_sym_compartment_repeat1] = "compartment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [anon_sym_DQUOTEcompartments_configuration_DQUOTE_COLON] = anon_sym_DQUOTEcompartments_configuration_DQUOTE_COLON,
  [anon_sym_DQUOTEenable_delete_DQUOTE_COLON] = anon_sym_DQUOTEenable_delete_DQUOTE_COLON,
  [anon_sym_DQUOTEcompartments_DQUOTE] = anon_sym_DQUOTEcompartments_DQUOTE,
  [anon_sym_DQUOTE_COLON] = anon_sym_DQUOTE_COLON,
  [anon_sym_DQUOTEname_DQUOTE_COLON] = anon_sym_DQUOTEname_DQUOTE_COLON,
  [anon_sym_DQUOTEdescription_DQUOTE_COLON] = anon_sym_DQUOTEdescription_DQUOTE_COLON,
  [anon_sym_DQUOTEchildren_DQUOTE_COLON] = anon_sym_DQUOTEchildren_DQUOTE_COLON,
  [sym_groupsConfiguration] = sym_groupsConfiguration,
  [sym_dynamicGroupsConfiguration] = sym_dynamicGroupsConfiguration,
  [sym_policiesConfiguration] = sym_policiesConfiguration,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__lzRootStatement] = sym__lzRootStatement,
  [sym_string] = sym_string,
  [aux_sym__string_content] = aux_sym__string_content,
  [sym_bool] = sym_bool,
  [sym_compartmentConfiguration] = sym_compartmentConfiguration,
  [sym_compartmentConfigurationObject] = sym_compartmentConfigurationObject,
  [sym_compartments] = sym_compartments,
  [sym_compartment] = sym_compartment,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_compartmentConfigurationObject_repeat1] = aux_sym_compartmentConfigurationObject_repeat1,
  [aux_sym_compartments_repeat1] = aux_sym_compartments_repeat1,
  [aux_sym_compartment_repeat1] = aux_sym_compartment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTEcompartments_configuration_DQUOTE_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEenable_delete_DQUOTE_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEcompartments_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEname_DQUOTE_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEdescription_DQUOTE_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEchildren_DQUOTE_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_groupsConfiguration] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamicGroupsConfiguration] = {
    .visible = true,
    .named = true,
  },
  [sym_policiesConfiguration] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__lzRootStatement] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_compartmentConfiguration] = {
    .visible = true,
    .named = true,
  },
  [sym_compartmentConfigurationObject] = {
    .visible = true,
    .named = true,
  },
  [sym_compartments] = {
    .visible = true,
    .named = true,
  },
  [sym_compartment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compartmentConfigurationObject_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compartments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compartment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_description = 1,
  field_enable_delete = 2,
  field_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_description] = "description",
  [field_enable_delete] = "enable_delete",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 4},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_enable_delete, 2},
  [1] =
    {field_enable_delete, 2},
    {field_enable_delete, 3, .inherited = true},
  [3] =
    {field_enable_delete, 0, .inherited = true},
    {field_enable_delete, 1, .inherited = true},
  [5] =
    {field_enable_delete, 4, .inherited = true},
  [6] =
    {field_name, 2},
  [7] =
    {field_description, 2},
  [8] =
    {field_description, 3, .inherited = true},
    {field_name, 2},
    {field_name, 3, .inherited = true},
  [11] =
    {field_description, 0, .inherited = true},
    {field_description, 1, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [15] =
    {field_description, 2},
    {field_description, 3, .inherited = true},
    {field_name, 3, .inherited = true},
  [18] =
    {field_description, 3, .inherited = true},
    {field_name, 3, .inherited = true},
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
  [5] = 4,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(159);
      ADVANCE_MAP(
        '"', 166,
        ',', 161,
        '-', 16,
        '/', 12,
        '0', 173,
        ':', 163,
        '[', 164,
        '\\', 156,
        ']', 165,
        'd', 155,
        'f', 28,
        'g', 124,
        'n', 149,
        'p', 110,
        't', 123,
        '{', 160,
        '}', 162,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(158);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(11);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '\\') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead == 'g') ADVANCE(124);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == '}') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '_') ADVANCE(45);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '/') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(191);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(173);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(184);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(186);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(185);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(181);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(180);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(183);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(88);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 122:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 152:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 153:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 154:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 155:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 156:
      ADVANCE_MAP(
        '"', 172,
        '/', 172,
        '\\', 172,
        'b', 172,
        'f', 172,
        'n', 172,
        'r', 172,
        't', 172,
        'u', 172,
      );
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 158:
      if (eof) ADVANCE(159);
      ADVANCE_MAP(
        '"', 166,
        ',', 161,
        '-', 16,
        '/', 12,
        '0', 173,
        ':', 163,
        '[', 164,
        ']', 165,
        'd', 155,
        'f', 28,
        'g', 124,
        'n', 149,
        'p', 110,
        't', 123,
        '{', 160,
        '}', 162,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(158);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(169);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DQUOTEcompartments_configuration_DQUOTE_COLON);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DQUOTEenable_delete_DQUOTE_COLON);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DQUOTEcompartments_DQUOTE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DQUOTE_COLON);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DQUOTEname_DQUOTE_COLON);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DQUOTEdescription_DQUOTE_COLON);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DQUOTEchildren_DQUOTE_COLON);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_groupsConfiguration);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_dynamicGroupsConfiguration);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_policiesConfiguration);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
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
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_groupsConfiguration] = ACTIONS(1),
    [sym_dynamicGroupsConfiguration] = ACTIONS(1),
    [sym_policiesConfiguration] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(77),
    [anon_sym_LBRACE] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_DQUOTEcompartments_configuration_DQUOTE_COLON,
    STATE(18), 2,
      sym__lzRootStatement,
      sym_compartmentConfiguration,
    ACTIONS(11), 3,
      sym_groupsConfiguration,
      sym_dynamicGroupsConfiguration,
      sym_policiesConfiguration,
  [19] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_DQUOTEcompartments_configuration_DQUOTE_COLON,
    STATE(63), 2,
      sym__lzRootStatement,
      sym_compartmentConfiguration,
    ACTIONS(13), 3,
      sym_groupsConfiguration,
      sym_dynamicGroupsConfiguration,
      sym_policiesConfiguration,
  [35] = 4,
    ACTIONS(18), 1,
      anon_sym_DQUOTE_COLON,
    ACTIONS(20), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym__string_content,
    ACTIONS(15), 2,
      sym_string_content,
      sym_escape_sequence,
  [49] = 4,
    ACTIONS(18), 1,
      anon_sym_DQUOTE,
    ACTIONS(20), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym__string_content,
    ACTIONS(22), 2,
      sym_string_content,
      sym_escape_sequence,
  [63] = 4,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_COLON,
    STATE(4), 1,
      aux_sym__string_content,
    ACTIONS(25), 2,
      sym_string_content,
      sym_escape_sequence,
  [77] = 4,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      aux_sym__string_content,
    ACTIONS(31), 2,
      sym_string_content,
      sym_escape_sequence,
  [91] = 4,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      aux_sym__string_content,
    ACTIONS(35), 2,
      sym_string_content,
      sym_escape_sequence,
  [105] = 4,
    ACTIONS(20), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DQUOTE_COLON,
    STATE(4), 1,
      aux_sym__string_content,
    ACTIONS(25), 2,
      sym_string_content,
      sym_escape_sequence,
  [119] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      anon_sym_DQUOTEname_DQUOTE_COLON,
    ACTIONS(43), 1,
      anon_sym_DQUOTEdescription_DQUOTE_COLON,
    ACTIONS(45), 1,
      anon_sym_DQUOTEchildren_DQUOTE_COLON,
  [135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_compartment_repeat1,
  [148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_compartments_repeat1,
  [161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_compartment_repeat1,
  [174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_document_repeat1,
  [187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_compartment_repeat1,
  [200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 1,
      sym_bool,
    ACTIONS(66), 2,
      sym_true,
      sym_false,
  [211] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_compartment_repeat1,
  [224] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_document_repeat1,
  [237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_DQUOTEname_DQUOTE_COLON,
    ACTIONS(74), 1,
      anon_sym_DQUOTEdescription_DQUOTE_COLON,
    ACTIONS(76), 1,
      anon_sym_DQUOTEchildren_DQUOTE_COLON,
  [250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_document_repeat1,
  [263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      anon_sym_DQUOTEenable_delete_DQUOTE_COLON,
    ACTIONS(87), 1,
      anon_sym_DQUOTEcompartments_DQUOTE,
  [276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_compartmentConfigurationObject_repeat1,
  [289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_compartments_repeat1,
  [302] = 3,
    ACTIONS(20), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym__string_content,
    ACTIONS(98), 2,
      sym_string_content,
      sym_escape_sequence,
  [313] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_compartment_repeat1,
  [326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_compartmentConfigurationObject_repeat1,
  [339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_compartment_repeat1,
  [352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_compartmentConfigurationObject_repeat1,
  [365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(38), 1,
      sym_bool,
    ACTIONS(66), 2,
      sym_true,
      sym_false,
  [376] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym_compartment_repeat1,
  [389] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_compartments_repeat1,
  [402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_compartmentConfigurationObject_repeat1,
  [415] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      aux_sym_compartmentConfigurationObject_repeat1,
  [428] = 3,
    ACTIONS(20), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym__string_content,
    ACTIONS(119), 2,
      sym_string_content,
      sym_escape_sequence,
  [439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_compartments,
  [449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_string,
  [459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_compartments,
  [485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_compartment,
  [511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [519] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_string,
  [529] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_string,
  [539] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
  [605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_DQUOTEenable_delete_DQUOTE_COLON,
    ACTIONS(161), 1,
      anon_sym_DQUOTEcompartments_DQUOTE,
  [631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_compartments,
  [649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_compartment,
  [675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_compartmentConfigurationObject,
  [717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_string,
  [735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_compartments,
  [753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_COLON,
  [784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
  [791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_COLON,
  [798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
  [805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
  [819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 35,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 63,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 91,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 119,
  [SMALL_STATE(11)] = 135,
  [SMALL_STATE(12)] = 148,
  [SMALL_STATE(13)] = 161,
  [SMALL_STATE(14)] = 174,
  [SMALL_STATE(15)] = 187,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 211,
  [SMALL_STATE(18)] = 224,
  [SMALL_STATE(19)] = 237,
  [SMALL_STATE(20)] = 250,
  [SMALL_STATE(21)] = 263,
  [SMALL_STATE(22)] = 276,
  [SMALL_STATE(23)] = 289,
  [SMALL_STATE(24)] = 302,
  [SMALL_STATE(25)] = 313,
  [SMALL_STATE(26)] = 326,
  [SMALL_STATE(27)] = 339,
  [SMALL_STATE(28)] = 352,
  [SMALL_STATE(29)] = 365,
  [SMALL_STATE(30)] = 376,
  [SMALL_STATE(31)] = 389,
  [SMALL_STATE(32)] = 402,
  [SMALL_STATE(33)] = 415,
  [SMALL_STATE(34)] = 428,
  [SMALL_STATE(35)] = 439,
  [SMALL_STATE(36)] = 449,
  [SMALL_STATE(37)] = 459,
  [SMALL_STATE(38)] = 467,
  [SMALL_STATE(39)] = 475,
  [SMALL_STATE(40)] = 485,
  [SMALL_STATE(41)] = 493,
  [SMALL_STATE(42)] = 501,
  [SMALL_STATE(43)] = 511,
  [SMALL_STATE(44)] = 519,
  [SMALL_STATE(45)] = 529,
  [SMALL_STATE(46)] = 539,
  [SMALL_STATE(47)] = 547,
  [SMALL_STATE(48)] = 555,
  [SMALL_STATE(49)] = 563,
  [SMALL_STATE(50)] = 571,
  [SMALL_STATE(51)] = 579,
  [SMALL_STATE(52)] = 587,
  [SMALL_STATE(53)] = 595,
  [SMALL_STATE(54)] = 605,
  [SMALL_STATE(55)] = 613,
  [SMALL_STATE(56)] = 621,
  [SMALL_STATE(57)] = 631,
  [SMALL_STATE(58)] = 639,
  [SMALL_STATE(59)] = 649,
  [SMALL_STATE(60)] = 657,
  [SMALL_STATE(61)] = 665,
  [SMALL_STATE(62)] = 675,
  [SMALL_STATE(63)] = 683,
  [SMALL_STATE(64)] = 691,
  [SMALL_STATE(65)] = 699,
  [SMALL_STATE(66)] = 707,
  [SMALL_STATE(67)] = 717,
  [SMALL_STATE(68)] = 725,
  [SMALL_STATE(69)] = 735,
  [SMALL_STATE(70)] = 743,
  [SMALL_STATE(71)] = 753,
  [SMALL_STATE(72)] = 761,
  [SMALL_STATE(73)] = 769,
  [SMALL_STATE(74)] = 777,
  [SMALL_STATE(75)] = 784,
  [SMALL_STATE(76)] = 791,
  [SMALL_STATE(77)] = 798,
  [SMALL_STATE(78)] = 805,
  [SMALL_STATE(79)] = 812,
  [SMALL_STATE(80)] = 819,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(4),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2, 0, 0),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compartment_repeat1, 2, 0, 8), SHIFT_REPEAT(19),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartment_repeat1, 2, 0, 8),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compartments_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartments_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compartmentConfigurationObject_repeat1, 2, 0, 3), SHIFT_REPEAT(56),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartmentConfigurationObject_repeat1, 2, 0, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartmentConfigurationObject, 5, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartmentConfigurationObject_repeat1, 3, 0, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartmentConfigurationObject, 6, 0, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartmentConfigurationObject_repeat1, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartment, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartmentConfiguration, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartments_repeat1, 5, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartments, 6, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartment_repeat1, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartment_repeat1, 3, 0, 6),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartmentConfigurationObject, 5, 0, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartment_repeat1, 3, 0, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartmentConfigurationObject, 4, 0, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartments, 7, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartment, 4, 0, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartment, 4, 0, 6),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartment, 4, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartment, 5, 0, 10),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartments, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartment, 5, 0, 7),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartmentConfigurationObject, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartment, 5, 0, 9),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_jsonlz(void) {
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
