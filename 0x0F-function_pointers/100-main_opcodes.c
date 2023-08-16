#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of a given function
 * @addr: Address of the function
 * @n: Number of bytes to print
 */
void print_opcodes(char *addr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", addr[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	char *main_addr;
	int n_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_addr = (char *)&main;

	print_opcodes(main_addr, n_bytes);

	return (0);
}
