# Grammars for the PREV'25 language

This is a repo for grammars for a toy language made for the Compilers course
at FRI, Ljubljana. It includes a TexMate and a Treesitter grammar.

## Treesitter

The treesitter grammar is located in the `treesitter` folder along with the
queries needed for the `nvim-treesitter` plugin. To install this grammar
add this to your `init.lua`:

```lua
local parser_config = require('nvim-treesitter.parsers').get_parser_configs()
vim.filetype.add {
  extension = {
    prev25 = 'prev25',
  },
}
parser_config.prev25 = {
  install_info = {
    url = 'https://github.com/filiptrplan/prev25-syntax-highlighting.git',
    files = { 'treesitter/src/parser.c' },
    generate_requires_npm = false,
    requires_generate_from_grammar = false,
  },
  filetype = 'prev25',
}
```

Also copy the contents of the `treesitter/queries` folder to a folder
in your nvim called `queries/prev25` (e.g. `~/.config/nvim/queries/prev25/`).
This will enable syntax highlighting for the language.
