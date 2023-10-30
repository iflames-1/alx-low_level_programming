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

### [2-append_text_to_file.c](./2-append_text_to_file.c)

> A function that appends text at the end of a file.

Compile and test with
```bash
echo -n Hello > hello
ls -l hello
```
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-append_text_to_file.c -o c
```
```bash
./c hello " World!"
```
```bash
cat hello
```

### [3-cp.c](./3-cp.c)

> A program that copies the content of a file to another file.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp
```
```bash
./cp incitatous Incitatous
ls -l Incitatous
cat Incitatous
```
