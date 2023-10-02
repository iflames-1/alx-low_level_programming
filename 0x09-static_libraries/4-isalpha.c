#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: The character to be checked.
 *
 * Return: Always 1 is c is a letter and 0 if otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
