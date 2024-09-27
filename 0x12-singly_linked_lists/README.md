# Singly Linked Lists in C

**All test files are included in the test folder of this directory**

### 0-print_list.c
> A function that prints all the elements of a list_t list.
> Compile and test with
```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/0-main.c 0-print_list.c -o a
```

### 1-list_len.c
> A function that returns the number of elements in a linked list_t list.
> Compile and test with
```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/1-main.c 1-list_len.c -o b
```

### 2-add_node.c
> A function that adds a new node at the beginning of a list_t list.
> Compile and test with
```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c test/2-add_node.c 0-print_list.c -o c
```

### 3-add_node_end.c
> A function that adds a new node at the end of a list_t list.
> Compile and test with
```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
```

### 4-free_list.c
> A function that frees a list_t list.
> Compile and test with
```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
```

### 100-first.c
> A function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
> Compile and test with
```c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-first.c -o first
```

### 101-hello_holberton.asm  *doesnt work yet :D*
> A 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
> Compile and test with
```c
gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
```