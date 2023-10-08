#include "main.h"
#include <stdlib.h>

/**
 *array_range - array of integers
 *@min: minimum value
 *@max: maximum value
 *Return: newly allocated space to array
 */
int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		ptr[i] = min++;

	return (ptr);
}
