# **C - Hello, World**                                                              
In this project, I learnt about C language, how to compile using `gcc`,
entry points using `main` and text-printing functions.
## Tasks :page_with_curl:                                                               - **0. Preprocessor**                                                                   
  - [0-Preprocessor](./0-processor): A Bash script that runs a C file saved in the variable `$CFILE`through the preprocessor and save the result into another file `C`
                                                                                        - **1. Compiler**
  - [1-Compiler](./1-compiler): A Bash Script that compiles a `C` file saved in the bariable `$CFIlLE`but does not link, and its output should be named same as the `C` file but with the extension `.o`                                                                     * Example: if the C file is `main.c`, the output file should be `main.o`.
                                                                                        - **2. Assembler**
  - [2-Assembler](./2-assembler): A Bash script that generates the assembly code of a C file saved in the variable `$CFILE`, and the output file should be named the same as the C file, but with the extension `.s`                                                        * Example: if the C file is `main.c`, the output file should be `main.s`
                                                                                        - **3. Name**
  - [3-Name](./3-name): A Bash script that compiles a C file saved in the variable `$CFILE` and creates an executable named `cisfun`.
                                                                                        - **4. Hello, puts**
  - [4-puts.c](./4-puts.c): A C program that prints exactly `"Programming is like building a multilingual puzzle,` followed by a new line, using only the function `puts`
                                                                                        - **5. Hello, printf**
  - [5-printf.c](./5-printf.c): A C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line. Using only the function `printf`
                                                                                        - **7. Intel**                                                                            - [100-intel](./100-intel): Script that generates the assembly code in Intel syntax of a C file saved in the variable `$CFILE`; saves the result in an output file of the same name but with a `.s` extension.
    * Example: If the C file is `main.c`, the output is `main.s`.

- **8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity**
  - [101-quotes.c](./101-quotes.c): A C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error. Without using any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
