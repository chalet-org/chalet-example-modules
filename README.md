# chalet-example-modules

This repository showcases how to setup a [Chalet](https://www.chalet-work.space) project with C++20 modules -- so far just with MSVC on Windows. 

To get started, [download Chalet](https://www.chalet-work.space/download), check out some of the documentation for it, and either build with the various commands from the command line, or try out the [Chalet VS Code Extension](https://marketplace.visualstudio.com/items?itemName=chalet-org.vscode-chalet) (recommended).


### Branches

| Name | Description |
| ---- | ----------- |
| main | The kitchen sink, where multiple module patterns are used. This only compiles with MSVC right now. |
| gcc | Requires GCC >= 11 - Uses only the patterns that work with GCC modules - no re-exports, local header unit imports, private module fragments, or module partition units |
| clang | Requires Clang >= 16 - no re-exports, header unit imports, private module fragments, or module partition units |

### Debugging

* For Windows: Install the C/C++ extension and Build with MSVC and use the "MSVC" configuration
