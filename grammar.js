/**
 * @file Logic-less templates
 * @author Pranav S K <pranavpg101@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "mustache",

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice($.block, $.partial, $.comment, $.interpolation, $.text_node),

    // Match anything that doesn't start with
    // - An open/close HTML delimiter (<, >)
    text_node: () => /[^{}]+/,

    _left_delimiter: () => "{{",
    _right_delimiter: () => "}}",
    _block_start_left_delimiter: () => choice("{{#", "{{^"),
    _block_end_left_delimiter: () => "{{/",

    identifier: () => token(choice(/[^<>"'\/={}()\s\.,!|]+/, ".")),
    path_expression: ($) => seq($.identifier, repeat1(seq(".", $.identifier))),

    comment: ($) =>
      seq(prec(2, seq($._left_delimiter, "!")), /[^}]+/, $._right_delimiter),
    interpolation: ($) =>
      seq(
        $._left_delimiter,
        field("path", choice($.path_expression, $.identifier)),
        $._right_delimiter,
      ),
    block_start: ($) =>
      seq(
        $._block_start_left_delimiter,
        field("path", choice($.path_expression, $.identifier)),
        $._right_delimiter,
      ),
    block_end: ($) =>
      seq(
        $._block_end_left_delimiter,
        field("path", choice($.path_expression, $.identifier)),
        $._right_delimiter,
      ),
    block: ($) =>
      seq($.block_start, field("content", repeat($._definition)), $.block_end),
    partial: ($) =>
      seq(
        prec(2, seq($._left_delimiter, ">")),
        field("path", alias(/[^}]+/, $.string)),
        $._right_delimiter,
      ),
  },
});
