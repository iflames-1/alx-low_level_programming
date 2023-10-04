#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *argstostr - concatenates all the arguments of a program
 *@ac: argument count
 *@av: argument vector
 *Return: pointer to the concatenated string or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *arg;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	arg = malloc(sizeof(char) * len + 1);
	if (arg == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arg[k++] = av[i][j];
		}
		arg[k++] = '\n';
	}
	arg[k] = '\0';

	return (arg);
}
