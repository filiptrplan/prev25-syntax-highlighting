/**
 * @file A parser for the PREV'25 language
 * @author Filip Trplan info@trplan.si
 * @license MIT
 */
module.exports = grammar({
    name: 'prev25',

    // Define tokens that can appear anywhere
    extras: $ => [
        /[ \t\n\r]+/,     // whitespace
        $.comment,
    ],

    // Conflict resolution strategies when needed
    conflicts: $ => [
        [$._expr, $.type], // Resolving ambiguity between expressions and types
    ],

    rules: {
        source: $ => repeat1($.def),

        // Comments
        comment: $ => /#[^\r\n]*/,

        // Definitions
        def: $ => choice(
            seq('typ', $.ident, '=', $.type),
            seq('var', $.ident, ':', $.type),
            seq('fun', $.ident, '(', optional($.id_colon_type), ')', ':', $.type),
            seq('fun', $.ident, '(', optional($.id_colon_type), ')', ':', $.type, '=', optional($.stmts))
        ),

        // Parameter and field definitions
        id_colon_type: $ => seq(
            seq($.ident, ':', $.type),
            repeat(seq(',', $.ident, ':', $.type))
        ),

        // Statements
        stmts: $ => choice(
            seq($.stmt, ',', $.stmts),
            $.stmt
        ),

        stmt: $ => choice(
            $._expr,
            seq($._expr, '=', $._expr),
            seq('return', $._expr),
            seq('while', $._expr, 'do', optional($.stmts), 'end'),
            seq('if', $._expr, 'then', optional($.stmts), 'end'),
            seq('if', $._expr, 'then', optional($.stmts), 'else', optional($.stmts), 'end'),
            seq('let', repeat1($.def), 'in', $.stmts, 'end')
        ),

        // Types
        type: $ => choice(
            'int',
            'char',
            'bool',
            'void',
            $.ident,
            seq('[', $.int_const, ']', $.type),
            seq('^', $.type),
            seq('<', $.id_colon_type, '>'),
            seq('{', $.id_colon_type, '}'),
            seq('(', optional(seq($.type, repeat(seq(',', $.type)))), ')', ':', $.type)
        ),

        // Expressions with precedence
        _expr: $ => $.or_expr,

        or_expr: $ => prec.left(1, choice(
            seq($.or_expr, '|', $.and_expr),
            $.and_expr
        )),

        and_expr: $ => prec.left(2, choice(
            seq($.and_expr, '&', $.comp_expr),
            $.comp_expr
        )),

        comp_expr: $ => prec.left(3, choice(
            seq($.comp_expr, '==', $.add_expr),
            seq($.comp_expr, '!=', $.add_expr),
            seq($.comp_expr, '<', $.add_expr),
            seq($.comp_expr, '>', $.add_expr),
            seq($.comp_expr, '<=', $.add_expr),
            seq($.comp_expr, '>=', $.add_expr),
            $.add_expr
        )),

        add_expr: $ => prec.left(4, choice(
            seq($.add_expr, '+', $.mul_expr),
            seq($.add_expr, '-', $.mul_expr),
            $.mul_expr
        )),

        mul_expr: $ => prec.left(5, choice(
            seq($.mul_expr, '*', $.prefix_expr),
            seq($.mul_expr, '/', $.prefix_expr),
            seq($.mul_expr, '%', $.prefix_expr),
            $.prefix_expr
        )),

        prefix_expr: $ => prec.right(6, choice(
            seq('+', $.prefix_expr),
            seq('-', $.prefix_expr),
            seq('!', $.prefix_expr),
            seq('^', $.prefix_expr),
            $.postfix_expr
        )),

        postfix_expr: $ => prec.left(7, choice(
            seq($.postfix_expr, '(', optional(seq($._expr, repeat(seq(',', $._expr)))), ')'),
            seq($.postfix_expr, '[', $._expr, ']'),
            seq($.postfix_expr, '^'),
            seq($.postfix_expr, '.', $.ident),
            $.const_expr
        )),

        const_expr: $ => choice(
            $.int_const,
            $.char_const,
            $.str_const,
            'true',
            'false',
            'null',
            seq('sizeof', $.type),
            $.ident,
            seq('(', $._expr, ')'),
            seq('{', $._expr, ':', $.type, '}')
        ),

        // Literals and identifiers
        int_const: $ => /[0-9]+/,

        char_const: $ => seq(
            "'",
            choice(
                /[^\\']/,
                seq('\\\\'),
                seq("\\'"),
                /\\0x[0-9A-F]{2}/
            ),
            "'"
        ),

        str_const: $ => seq(
            '"',
            repeat1(choice(
                /[^\\"\r\n]/,
                seq('\\\\'),
                seq('\\"'),
                /\\0x[0-9A-F]{2}/
            )),
            '"'
        ),

        ident: $ => /[A-Za-z_][A-Za-z0-9_]*/
    }
});
