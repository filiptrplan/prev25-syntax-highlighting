; Keywords
[
  "typ"
  "var"
  "fun"
  "return"
  "while"
  "do"
  "end"
  "if"
  "then"
  "else"
  "let"
  "in"
] @keyword

; Types
[
  "int"
  "char"
  "bool"
  "void"
] @type.builtin

; Constants
[
  "true"
  "false"
  "null"
] @constant.builtin

(int_const) @number
(char_const) @character
(str_const) @string

; Operators
[
  "+"
  "-"
  "*"
  "/"
  "%"
  "="
  "=="
  "!="
  "<"
  ">"
  "<="
  ">="
  "&"
  "|"
  "!"
  "^"
  "sizeof"
] @operator

; Punctuation
[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

[
  ","
  "."
  ":"
] @punctuation.delimiter

; Functions
(def
  "fun" @keyword.function
  (ident) @function)

; Function calls
(postfix_expr
  (postfix_expr) @function.call
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

; Variables
(def
  "var" @keyword.storage
  (ident) @variable)

; Types
(def
  "typ" @keyword.type
  (ident) @type)

; Parameters
(id_colon_type
  (ident) @variable.parameter)

; Comments
(comment) @comment
