#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - reads the code
 *@argc: argument count
 *@argv: argument vector
 *Return: result from operation
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int);
	int num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	func = get_op_func(operator);

	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((operator[0] == '/' || operator[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", func(num1, num2));

	return (0);
}
