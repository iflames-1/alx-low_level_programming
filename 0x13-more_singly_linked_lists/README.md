# Singly Linked Lists in C

**All test files are included in the test folder of this directory**

### 0-print_listint.c

> A function that prints all the elements of a listint_t list.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/0-main.c 0-print_listint.c -o a
```
```bash
./a
```

### 1-listint_len.c

> A function that returns the number of elements in a linked listint_t list.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/1-main.c 1-listint_len.c -o b
```
```bash
./b
```

### 2-add_nodeint.c

> A function that adds a new node at the beginning of a listint_t list.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/2-main.c 2-add_nodeint.c 0-print_listint.c -o c
```
```bash
./c
```

### 3-add_nodeint_end.c

> A function that adds a new node at the end of a listint_t list.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d
```
```bash
./d
```

### 4-free_listint.c

> A function that frees a listint_t list.

Copile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e
```
```bash
valgrind ./e
```

### 5-free_listint2.c

>  A function that frees a listint_t list and sets the head to NULL.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f
```
```bash
valgrind ./f
```

### 6-pop_listint.c

> A function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g
```
```bash
valgrind ./g
```

### 7-get_nodeint.c

> A function that returns the nth node of a listint_t linked list.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h
```
```bash
./h
```

### 8-sum_listint.c

>  A function that returns the sum of all the data (n) of a listint_t linked list.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c -o i
```
```bash
./i
```

### 9-insert_nodeint.c

> A function that inserts a new node at a given position.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j
```
```bash
./j
```

### 10-delete_nodeint.c

> A function that deletes the node at index index of a listint_t linked list.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c -o k
```

### 100-reverse_listint.c

> A function that reverses a listint_t linked list.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/100-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 100-reverse_listint.c -o l
```
```bash
valgrind ./l
```

### 101-print_listint_safe.c

> A function that prints a listint_t linked list.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/101-main.c 2-add_nodeint.c 101-print_listint_safe.c -o m
```
```bash
./m
```

### 102-free_listint_safe.c

> A function that frees a listint_t list.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/102-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c -o n
```
```bash
./n
```

### 103-find_loop.c

> A function that finds the loop in a linked list.

Compile and test with
```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 test/103-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c 103-find_loop.c -o o
```
```bash
./o
```
