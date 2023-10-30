# File I/O C

**All test files are included in the test folder of this directory**

### [0-read_textfile.c](./0-read_textfile.c)

> A function that reads a text file and prints it to the POSIX standard output.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/0-main.c 0-read_textfile.c -o a
```
```bash
./a Requiescat
```

### [1-create_file.c](./1-create_file.c)

> A function that creates a file.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/1-main.c 1-create_file.c -o b
```
```
./b hello world
```