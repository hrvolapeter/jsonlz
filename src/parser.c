#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  sym_compartmentConfiguration = 14,
  sym_compartments = 15,
  sym_name = 16,
  sym_description = 17,
  sym_children = 18,
  sym_enableDelete = 19,
  sym_groupsConfiguration = 20,
  sym_dynamicGroupsConfiguration = 21,
  sym_policiesConfiguration = 22,
  sym_comment = 23,
  sym_document = 24,
  sym__lzRootStatement = 25,
  sym_string = 26,
  aux_sym__string_content = 27,
  sym_bool = 28,
  sym_id = 29,
  sym_compartmentConfigurationObject = 30,
  sym_compartmentsObj = 31,
  sym_compartment = 32,
  aux_sym_document_repeat1 = 33,
  aux_sym_compartmentConfigurationObject_repeat1 = 34,
  aux_sym_compartmentsObj_repeat1 = 35,
  aux_sym_compartment_repeat1 = 36,
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
  [sym_compartmentConfiguration] = "compartmentConfiguration",
  [sym_compartments] = "compartments",
  [sym_name] = "name",
  [sym_description] = "description",
  [sym_children] = "children",
  [sym_enableDelete] = "enableDelete",
  [sym_groupsConfiguration] = "groupsConfiguration",
  [sym_dynamicGroupsConfiguration] = "dynamicGroupsConfiguration",
  [sym_policiesConfiguration] = "policiesConfiguration",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__lzRootStatement] = "_lzRootStatement",
  [sym_string] = "string",
  [aux_sym__string_content] = "_string_content",
  [sym_bool] = "bool",
  [sym_id] = "id",
  [sym_compartmentConfigurationObject] = "compartmentConfigurationObject",
  [sym_compartmentsObj] = "compartmentsObj",
  [sym_compartment] = "compartment",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_compartmentConfigurationObject_repeat1] = "compartmentConfigurationObject_repeat1",
  [aux_sym_compartmentsObj_repeat1] = "compartmentsObj_repeat1",
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
  [sym_compartmentConfiguration] = sym_compartmentConfiguration,
  [sym_compartments] = sym_compartments,
  [sym_name] = sym_name,
  [sym_description] = sym_description,
  [sym_children] = sym_children,
  [sym_enableDelete] = sym_enableDelete,
  [sym_groupsConfiguration] = sym_groupsConfiguration,
  [sym_dynamicGroupsConfiguration] = sym_dynamicGroupsConfiguration,
  [sym_policiesConfiguration] = sym_policiesConfiguration,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__lzRootStatement] = sym__lzRootStatement,
  [sym_string] = sym_string,
  [aux_sym__string_content] = aux_sym__string_content,
  [sym_bool] = sym_bool,
  [sym_id] = sym_id,
  [sym_compartmentConfigurationObject] = sym_compartmentConfigurationObject,
  [sym_compartmentsObj] = sym_compartmentsObj,
  [sym_compartment] = sym_compartment,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_compartmentConfigurationObject_repeat1] = aux_sym_compartmentConfigurationObject_repeat1,
  [aux_sym_compartmentsObj_repeat1] = aux_sym_compartmentsObj_repeat1,
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
  [sym_compartmentConfiguration] = {
    .visible = true,
    .named = true,
  },
  [sym_compartments] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [sym_enableDelete] = {
    .visible = true,
    .named = true,
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
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_compartmentConfigurationObject] = {
    .visible = true,
    .named = true,
  },
  [sym_compartmentsObj] = {
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
  [aux_sym_compartmentsObj_repeat1] = {
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
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 4},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_enable_delete, 3},
  [1] =
    {field_enable_delete, 4, .inherited = true},
  [2] =
    {field_enable_delete, 0, .inherited = true},
    {field_enable_delete, 1, .inherited = true},
  [4] =
    {field_enable_delete, 3},
    {field_enable_delete, 4, .inherited = true},
  [6] =
    {field_name, 3},
  [7] =
    {field_description, 3},
  [8] =
    {field_description, 4, .inherited = true},
    {field_name, 3},
    {field_name, 4, .inherited = true},
  [11] =
    {field_description, 0, .inherited = true},
    {field_description, 1, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [15] =
    {field_description, 3},
    {field_description, 4, .inherited = true},
    {field_name, 4, .inherited = true},
  [18] =
    {field_description, 4, .inherited = true},
    {field_name, 4, .inherited = true},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(151);
      ADVANCE_MAP(
        '"', 158,
        ',', 153,
        '-', 14,
        '/', 10,
        '0', 165,
        ':', 155,
        '[', 156,
        '\\', 148,
        ']', 157,
        'd', 147,
        'f', 20,
        'g', 116,
        'n', 141,
        'p', 102,
        't', 115,
        '{', 152,
        '}', 154,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(150);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '/') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'g') ADVANCE(116);
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == '}') ADVANCE(154);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(174);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(176);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(175);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(177);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(172);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(182);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(165);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(74);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(124);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 145:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 147:
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 148:
      ADVANCE_MAP(
        '"', 164,
        '/', 164,
        '\\', 164,
        'b', 164,
        'f', 164,
        'n', 164,
        'r', 164,
        't', 164,
        'u', 164,
      );
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 150:
      if (eof) ADVANCE(151);
      ADVANCE_MAP(
        '"', 158,
        ',', 153,
        '-', 14,
        '/', 10,
        '0', 165,
        ':', 155,
        '[', 156,
        ']', 157,
        'd', 147,
        'f', 20,
        'g', 116,
        'n', 141,
        'p', 102,
        't', 115,
        '{', 152,
        '}', 154,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(150);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_compartmentConfiguration);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_compartments);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_description);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_children);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_enableDelete);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_groupsConfiguration);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_dynamicGroupsConfiguration);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_policiesConfiguration);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
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
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 3},
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
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
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
    [sym_document] = STATE(78),
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
      sym_compartmentConfiguration,
    STATE(29), 1,
      sym__lzRootStatement,
    ACTIONS(11), 3,
      sym_groupsConfiguration,
      sym_dynamicGroupsConfiguration,
      sym_policiesConfiguration,
  [18] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_compartmentConfiguration,
    STATE(65), 1,
      sym__lzRootStatement,
    ACTIONS(13), 3,
      sym_groupsConfiguration,
      sym_dynamicGroupsConfiguration,
      sym_policiesConfiguration,
  [33] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(79), 1,
      sym_string,
    STATE(82), 1,
      sym_id,
  [49] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      sym_name,
    ACTIONS(23), 1,
      sym_description,
    ACTIONS(25), 1,
      sym_children,
  [65] = 4,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(32), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym__string_content,
    ACTIONS(29), 2,
      sym_string_content,
      sym_escape_sequence,
  [79] = 4,
    ACTIONS(32), 1,
      sym_comment,
    ACTIONS(34), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      aux_sym__string_content,
    ACTIONS(36), 2,
      sym_string_content,
      sym_escape_sequence,
  [93] = 4,
    ACTIONS(32), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      aux_sym__string_content,
    ACTIONS(40), 2,
      sym_string_content,
      sym_escape_sequence,
  [107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_compartmentConfigurationObject_repeat1,
  [120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [129] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym_compartment_repeat1,
  [142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_document_repeat1,
  [155] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_compartments,
    ACTIONS(61), 1,
      sym_enableDelete,
  [168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym_compartment_repeat1,
  [181] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym_compartment_repeat1,
  [194] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      aux_sym_compartment_repeat1,
  [207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_document_repeat1,
  [220] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_name,
    ACTIONS(78), 1,
      sym_description,
    ACTIONS(80), 1,
      sym_children,
  [233] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_compartment_repeat1,
  [246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_compartment_repeat1,
  [259] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_compartment_repeat1,
  [272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(24), 1,
      sym_bool,
    ACTIONS(88), 2,
      sym_true,
      sym_false,
  [283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_compartmentsObj_repeat1,
  [296] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    STATE(33), 1,
      aux_sym_compartmentConfigurationObject_repeat1,
  [309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym_compartmentsObj_repeat1,
  [322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_id,
    STATE(79), 1,
      sym_string,
  [335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(56), 1,
      sym_bool,
    ACTIONS(88), 2,
      sym_true,
      sym_false,
  [346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_compartmentsObj_repeat1,
  [359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym_document_repeat1,
  [372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_compartmentConfigurationObject_repeat1,
  [385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_compartmentConfigurationObject_repeat1,
  [398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
  [407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_compartmentConfigurationObject_repeat1,
  [420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_compartment,
  [462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_compartmentsObj,
  [520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_compartmentsObj,
  [530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_compartmentConfigurationObject,
  [540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(43), 1,
      sym_string,
  [550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      sym_string,
  [560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_string,
  [626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_string,
  [636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_compartmentsObj,
  [646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_compartments,
    ACTIONS(158), 1,
      sym_enableDelete,
  [656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_compartmentsObj,
  [690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_compartment,
  [708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COLON,
  [739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
  [746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_COLON,
  [753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COLON,
  [760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_COLON,
  [767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_COLON,
  [788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
  [795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COLON,
  [802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COLON,
  [809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_COLON,
  [816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_COLON,
  [823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_COLON,
  [830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
  [837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
  [844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 33,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 65,
  [SMALL_STATE(7)] = 79,
  [SMALL_STATE(8)] = 93,
  [SMALL_STATE(9)] = 107,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 129,
  [SMALL_STATE(12)] = 142,
  [SMALL_STATE(13)] = 155,
  [SMALL_STATE(14)] = 168,
  [SMALL_STATE(15)] = 181,
  [SMALL_STATE(16)] = 194,
  [SMALL_STATE(17)] = 207,
  [SMALL_STATE(18)] = 220,
  [SMALL_STATE(19)] = 233,
  [SMALL_STATE(20)] = 246,
  [SMALL_STATE(21)] = 259,
  [SMALL_STATE(22)] = 272,
  [SMALL_STATE(23)] = 283,
  [SMALL_STATE(24)] = 296,
  [SMALL_STATE(25)] = 309,
  [SMALL_STATE(26)] = 322,
  [SMALL_STATE(27)] = 335,
  [SMALL_STATE(28)] = 346,
  [SMALL_STATE(29)] = 359,
  [SMALL_STATE(30)] = 372,
  [SMALL_STATE(31)] = 385,
  [SMALL_STATE(32)] = 398,
  [SMALL_STATE(33)] = 407,
  [SMALL_STATE(34)] = 420,
  [SMALL_STATE(35)] = 428,
  [SMALL_STATE(36)] = 436,
  [SMALL_STATE(37)] = 444,
  [SMALL_STATE(38)] = 452,
  [SMALL_STATE(39)] = 462,
  [SMALL_STATE(40)] = 470,
  [SMALL_STATE(41)] = 478,
  [SMALL_STATE(42)] = 486,
  [SMALL_STATE(43)] = 494,
  [SMALL_STATE(44)] = 502,
  [SMALL_STATE(45)] = 510,
  [SMALL_STATE(46)] = 520,
  [SMALL_STATE(47)] = 530,
  [SMALL_STATE(48)] = 540,
  [SMALL_STATE(49)] = 550,
  [SMALL_STATE(50)] = 560,
  [SMALL_STATE(51)] = 568,
  [SMALL_STATE(52)] = 576,
  [SMALL_STATE(53)] = 584,
  [SMALL_STATE(54)] = 592,
  [SMALL_STATE(55)] = 600,
  [SMALL_STATE(56)] = 608,
  [SMALL_STATE(57)] = 616,
  [SMALL_STATE(58)] = 626,
  [SMALL_STATE(59)] = 636,
  [SMALL_STATE(60)] = 646,
  [SMALL_STATE(61)] = 656,
  [SMALL_STATE(62)] = 664,
  [SMALL_STATE(63)] = 672,
  [SMALL_STATE(64)] = 680,
  [SMALL_STATE(65)] = 690,
  [SMALL_STATE(66)] = 698,
  [SMALL_STATE(67)] = 708,
  [SMALL_STATE(68)] = 716,
  [SMALL_STATE(69)] = 724,
  [SMALL_STATE(70)] = 732,
  [SMALL_STATE(71)] = 739,
  [SMALL_STATE(72)] = 746,
  [SMALL_STATE(73)] = 753,
  [SMALL_STATE(74)] = 760,
  [SMALL_STATE(75)] = 767,
  [SMALL_STATE(76)] = 774,
  [SMALL_STATE(77)] = 781,
  [SMALL_STATE(78)] = 788,
  [SMALL_STATE(79)] = 795,
  [SMALL_STATE(80)] = 802,
  [SMALL_STATE(81)] = 809,
  [SMALL_STATE(82)] = 816,
  [SMALL_STATE(83)] = 823,
  [SMALL_STATE(84)] = 830,
  [SMALL_STATE(85)] = 837,
  [SMALL_STATE(86)] = 844,
  [SMALL_STATE(87)] = 851,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compartment_repeat1, 2, 0, 8), SHIFT_REPEAT(18),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartment_repeat1, 2, 0, 8),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compartmentsObj_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartmentsObj_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compartmentConfigurationObject_repeat1, 2, 0, 3), SHIFT_REPEAT(60),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartmentConfigurationObject_repeat1, 2, 0, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartment, 5, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartmentsObj_repeat1, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartmentConfigurationObject, 5, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartmentConfigurationObject, 5, 0, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartment, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartment_repeat1, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartmentConfigurationObject, 6, 0, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartmentConfigurationObject, 6, 0, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartment_repeat1, 4, 0, 6),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartment_repeat1, 4, 0, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartment, 6, 0, 10),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartment, 6, 0, 9),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__lzRootStatement, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartmentsObj, 5, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartment, 6, 0, 7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartmentConfigurationObject_repeat1, 4, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compartmentConfigurationObject_repeat1, 4, 0, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartmentsObj, 6, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartmentsObj, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartment, 5, 0, 6),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartment, 5, 0, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compartmentConfigurationObject, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [188] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
