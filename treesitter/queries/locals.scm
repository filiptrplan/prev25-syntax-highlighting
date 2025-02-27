; Variable definitions
(def
  "var" @keyword.storage
  (ident) @local.definition.var) @local.scope

; Function definitions
(def
  "fun" @keyword.function
  (ident) @local.definition.function) @local.scope

; Type definitions
(def
  "typ" @keyword.type
  (ident) @local.definition.type) @local.scope

; Parameters as local variables
(id_colon_type
  (ident) @local.definition.parameter)

; Let block creates a new scope
(stmt
  "let" @keyword
  (_)
  "in" @keyword
  (_)
  "end" @keyword) @local.scope

; References
(ident) @local.reference
