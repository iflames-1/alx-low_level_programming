#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - program that adds only positive numbers togeter
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 if no argument is passed or success
 *1 if argument is'nt a positive number
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int num = atoi(arg);

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
