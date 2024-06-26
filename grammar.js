/**
 * @file JSON grammar for tree-sitter
 * @author Max Brunsfeld <maxbrunsfeld@gmail.com>
 * @author Amaan Qureshi <amaanq12@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'jsonlz',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  supertypes: $ => [
    $._value,
  ],

  rules: {
    document: $ =>  object(commaSep($._lzRootStatement)),

    _lzRootStatement: $ => choice(
      seq($.compartmentConfiguration,':', $.compartmentConfigurationObject),
      seq($.networkConfiguration,':', $.networkConfigurationObject),
      $.groupsConfiguration,
      $.dynamicGroupsConfiguration,
      $.policiesConfiguration
    ),

    _value: $ => choice(
      $.object,
      $.array,
      $.number,
      $.string,
      $.true,
      $.false,
      $.null,
    ),

    object: $ => seq(
      '{', commaSep($.pair), '}',
    ),

    pair: $ => seq(
      field('key', $.string),
      ':',
      field('value', $._value),
    ),

    array: $ => seq(
      '[', commaSep($._value), ']',
    ),

    string: $ => choice(
      seq('"', '"'),
      seq('"', $._string_content, '"'),
    ),

    _string_content: $ => repeat1(choice(
      $.string_content,
      $.escape_sequence,
    )),

    string_content: _ => token.immediate(prec(1, /[^\\"\n]+/)),

    escape_sequence: _ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|f|n|r|t|u)/,
    )),

    number: _ => {
      const decimalDigits = /\d+/;
      const signedInteger = seq(optional('-'), decimalDigits);
      const exponentPart = seq(choice('e', 'E'), signedInteger);

      const decimalIntegerLiteral = seq(
        optional('-'),
        choice(
          '0',
          seq(/[1-9]/, optional(decimalDigits)),
        ),
      );

      const decimalLiteral = choice(
        seq(decimalIntegerLiteral, '.', optional(decimalDigits), optional(exponentPart)),
        seq(decimalIntegerLiteral, optional(exponentPart)),
      );

      return token(decimalLiteral);
    },

    true: _ => 'true',

    false: _ => 'false',

    bool: $  => choice($.true, $.false),

    null: _ => 'null',

    compartmentConfiguration: $ => '"compartments_configuration"',
    compartments: $ => '"compartments"',
    name: $ => '"name"',
    description: $ => '"description"',
    children: _ => '"children"',
    id: $ => $.string,

    compartmentConfigurationObject: $ => object(commaSep(choice(
      seq($.enableDelete,':',field('enable_delete', $.bool)),
      seq($.compartments,':', $.compartmentsObj)
    ))),

    enableDelete: _ => '"enable_delete"',

    compartmentsObj: $ => object(commaSep(seq($.id,':', $.compartment))),
    compartment: $ => object(commaSep(choice(
      seq($.name,':', field('name',$.string)),
      seq($.description,':', field('description',$.string)),
      seq($.children, ':', $.compartmentsObj),
    ))),

    groupsConfiguration: _ => 'groups_configuration',

    dynamicGroupsConfiguration: _ => 'dynamic_groups_configuration',

    policiesConfiguration: _ => 'policies_configuration',

    comment: _ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      ),
    )),
  },
});

function object(rule) {
  return seq('{',rule,'}');
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

