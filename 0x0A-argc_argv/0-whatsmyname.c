#include <stdio.h>
#include "main.h"

/**
 *main - prints the name of the file
 *@argc: argument count
 *@argv: argument vector
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
