; Variable definitions
(def
  "var" @keyword.storage
  (ident) @definition.var) @definition.scope

; Function definitions
(def
  "fun" @keyword.function
  (ident) @definition.function) @definition.scope

; Type definitions
(def
  "typ" @keyword.storage.type
  (ident) @definition.type) @definition.scope

; Parameters as local variables
(id_colon_type
  (ident) @definition.parameter)

; Let block creates a new scope
(stmt
  "let" @keyword
  (_)
  "in" @keyword
  (_)
  "end" @keyword) @scope

; References
(ident) @reference
