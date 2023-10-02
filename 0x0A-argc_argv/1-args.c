#include <stdio.h>

/**
 *main - prints the number of arguments passed
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 always for success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
