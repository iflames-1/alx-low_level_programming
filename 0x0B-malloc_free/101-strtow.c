#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *strtow - splits a string into words
 *@str: input string
 *Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, word_count = 0;
	char **words, *word;

	if (str == NULL || *str == '\0')
		return (NULL);

	/*Count the number of words*/
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}
	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	i = 0;
	word = str;
	for (j = 0; j < word_count; j++)
	{
		while (*word == ' ')
			word++;
		for (i = 0; word[i] != ' ' && word[i] != '\0'; i++)
			;
		words[j] = malloc(sizeof(char) * (i + 1));
		if (words[j] == NULL)
		{
			for (i = 0; i < j; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		for (i = 0; word[i] != ' ' && word[i] != '\0'; i++)
			words[j][i] = word[i];
		words[j][i] = '\0';
		word += i;
	}
	words[word_count] = NULL;

	return (words);
}
