# Functions, nested loops

### [0-putchar.c](./0-putchar.c)
> Program that prints _putchar, followed by a new line using _putchar.
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar && ./0-putchar
```

### [1-alphabet.c](./1-alphabet.c)
> Function that prints the alphabet, in lowercase, followed by a new line.
> Prototype: `void print_alphabet(void);`
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c test/1-main.c 1-alphabet.c -o 1-alphabet
./1-alphabet
```

### [2-print_alphabet_x10.c](./2-print_alphabet_x10.c)
> Function that prints 10 times the alphabet, in lowercase, followed by a new line.
> Prototype: `void print_alphabet_x10(void);`
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c test/2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
./2-alphabet_x10
```

### [3-islower.c](./3-islower.c)
> Function that checks for lowercase character.
> Prototype: `int _islower(int c);`
> Returns `1` if `c` is lowercase, `0` otherwise.
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c test/3-main.c 3-islower.c -o 3-islower
./3-islower
```

### [4-isalpha.c](./4-isalpha.c)
> Function that checks for alphabetic character.
> Prototype: `int _isalpha(int c);`
> Returns `1` if `c` is a letter, lowercase or uppercase, `0` otherwise.
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c test/4-main.c 4-isalpha.c -o 4-isalpha
./4-isalpha
```

### [5-sign.c](./5-sign.c)
> Function that prints the sign of a number.
> Prototype: `int print_sign(int n);`
> Returns `1` and prints `+` if `n` is greater than zero, `0` and prints `0` if `n` is zero, `-1` and prints `-` if `n` is less than zero
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c test/5-main.c 5-sign.c -o 5-sign
./5-sign
```

### [6-abs.c](./6-abs.c)
> Function that computes the absolute value of an integer.
> Prototype: `int _abs(int);`
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c test/6-main.c 6-abs.c -o 6-abs
./6-abs
```

### [7-print_last_digit.c](./7-print_last_digit.c)
> Function that prints the last digit of a number.
> Prototype: `int print_last_digit(int);`
> Returns the value of the last digit
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
./7-last_digit
```

### [8-24_hours.c](./8-24_hours.c)
> Function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
> Prototype: `void jack_bauer(void);`
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c test/8-main.c 8-24_hours.c -o 8-24
./8-24 | head
./8-24 | tail
```

### [9-times_table.c](./9-times_table.c)
> Function that prints the 9 times table, starting with 0.
> Prototype: `void times_table(void);`
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c test/9-main.c 9-times_table.c -o 9-times_table
./9-times_table | cat -e
./9-times_table | tr ' ' . | cat -e
```

### [10-add.c](./10-add.c)
> Function that adds two integers and returns the result.
> Prototype: `int add(int num1, int num2);`
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c test/10-main.c 10-add.c -o 10-add
```

### [11-print_to_98.c](./11-print_to_98.c)
> Function that prints all natural numbers from `n` to `98`, followed by a new line.
> Prototype: `void print_to_98(int n);`
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c test/11-main.c 11-print_to_98.c -o 11-98
./11-98
```

### [100-times_table.c](./100-times_table.c)
> Function that prints the `n` times table, starting with 0.
> `n` should be greater than `0` and less `15`.
> Prototype: `void print_times_table(int n);`
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c test/100-main.c 100-times_table.c -o 100-times_table
./100-times_table
```

### [101-natural.c](./101-natural.c)
> Program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line.
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-natural.c -o 101-natural
./101-natural
```

### [102-fibonacci.c](./102-fibonacci.c)
> Program that prints the first 50 Fibonacci numbers, starting with `1` and `2`, followed by a new line.
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-fibonacci.c -o 102-fibonacci
./102-fibonacci
```

### [103-fibonacci.c](./103-fibonacci.c)
> Program that finds and prints the sum of the even-valued terms, followed by a new line, the fib value shouldn't exceed 4,000,000.
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-fibonacci.c -o 103-fibonacci
./103-fibonacci
```

### [104-fibonacci.c](./104-fibonacci.c)
> Program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 104-fibonacci.c -o 104-fibonacci
./104-fibonacci
```
