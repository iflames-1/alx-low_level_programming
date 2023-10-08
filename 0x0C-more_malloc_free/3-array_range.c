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
	int *ptr, i, size = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}
