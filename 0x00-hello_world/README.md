# Hello, World

### [0-preprocessor](./0-preprocessor)
> A script that runs a C file through the preprocessor and save the result into another file.
* The C file name will be saved in the variable `$CFILE`
* The output should be saved in the file `c`

> Test with:
```bash
export CFILE=main.c
./0-preprocessor
tail c
```


### [1-compiler](./1-compiler)
> A script that compiles a C file but does not link.
* The C file name will be saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.

> Test with:
```bash
./1-compiler && cat -v main.o | head
```


### [2-assembler](./2-assembler)
> A script that generates the assembly code of a C code and save it in an output file.
* The C file name will be saved in the variable `$CFILE`
* The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.

> Test with:
```bash
./2-assembler && ls
```


### [3-name](./3-name)
> A script that compiles a C file and creates an executable named `cisfun`.
* The C file name will be saved in the variable `$CFILE`

> Test with:
```bash
./3-name && ls
```


### [4-puts.c](./4-puts.c)
> C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line using the `puts` function.
> Returns 0

> Test with:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
```

### [5-printf.c](./5-printf.c)
> C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line using the `printf` function.
> Returns 0

> Test with:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c && ./a.out
```

### [6-size.c](./6-size.c)
> C program that prints the size of various types on the computer it is compiled and run on using `sizeof` function.
> You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32 gcc` option

> Test with
```bash
gcc 6-size.c -m64 -o size64 2> /tmp/64 && ./size64
```

### [100-intel](./100-intel)
> A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
* The C file name will be saved in the variable `$CFILE`.
* The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.

> Text with:
```bash
./100-intel && cat main.s
```

### [101-quote.c](./101-quote.c)
> C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error using the `write` function.

> Test with:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c && ./quote
```
