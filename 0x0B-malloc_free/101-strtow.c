#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i])
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] && str[i] != ' ')
				i++;
		}
		else
			i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word_count = count_words(str);

	words = malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		len = 0;
		while (str[i + len] && str[i + len] != ' ')
			len++;
		if (len > 0)
		{
			words[j] = malloc(sizeof(char) * (len + 1));
			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (k = 0; k < len; k++)
				words[j][k] = str[i++];
			words[j][k] = '\0';
			j++;
		}
	}
	words[j] = NULL;

	return (words);
}
