# Bit Manipulation in C

**All test files are included in the test folder of this directory**

### [0-binary_to_uint.c](./0-binary_to_uint.c)

> A function that converts a binary number to an unsigned int.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/0-main.c 0-binary_to_uint.c -o a
```
```bash
./a
```

### [1-print_binary.c](./1-print_binary.c)

> A function that prints the binary representation of a number.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/1-main.c 1-print_binary.c _putchar.c -o b
```
```bash
./b
```

### [2-get_bit.c](./2-get_bit.c)

> A function that returns the value of a bit at a given index.

Compile and tes with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/2-main.c 2-get_bit.c -o c
```
```bash
./c
```

### [3-set_bit.c](./3-set_bit.c)

> A function that sets the value of a bit to 1 at a given index.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/3-main.c 3-set_bit.c -o d
```
```bash
./d
```

### [4-clear_bit.c](./4-clear_bit.c)

> A function that sets the value of a bit to 0 at a given index.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/4-main.c 4-clear_bit.c -o e
```
```bash
./e
```

### [5-flip_bits.c](./5-flip_bits.c)

>  A function that returns the number of bits you would need to flip to get from one number to another.

Compile and tes with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/5-main.c 5-flip_bits.c -o f
```
```bash
./f
```

### [100-get_endianness.c](./100-get_endianness.c)

> A function that checks the endianness.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/100-main.c 100-get_endianness.c -o h
```
```bash
./h
```
```bash
lscpu | head
```

### [101-password](./101-password)

> Find the password for [this program](https://github.com/alx-tools/0x13.c).

Check with
```bash
cat 101-password
```