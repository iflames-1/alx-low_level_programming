#include <stdio.h>
/**
 * main -  program that prints its name
 * @argc: number of argument passed to the program
 * from the command line
 * @argv: argument vector
 * Return: success
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Unused parameter */

	printf("%s\n", argv[0]);

	return (0);
}
