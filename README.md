# Grammars for the PREV'25 language

This is a repo for grammars for a toy language made for the Compilers course
at FRI, Ljubljana. It includes a TextMate and a Treesitter grammar.

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

## TextMate

The TextMate grammar is located in the `textmate` folder. It provides syntax highlighting 
for VSCode and other editors that support TextMate grammars.

### Using the TextMate Grammar in VSCode

To use the PREV'25 syntax highlighting in VSCode:

1. Create a new VSCode extension:
   ```bash
   mkdir -p ~/.vscode/extensions/prev25-language
   ```

2. Copy the TextMate grammar files to the extension directory:
   ```bash
   cp -r textmate/* ~/.vscode/extensions/prev25-language/
   ```

3. Restart VSCode

4. Open any file with `.prev` or `.prev25` extension, or manually set the language mode to "PREV'25"
