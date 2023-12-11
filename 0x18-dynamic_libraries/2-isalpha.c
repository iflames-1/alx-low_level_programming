#include "main.h"

/**
 * _isalpha - Checks for alphabetic character.
 * @c: The character to be checked.
 *
 * Return: Always 1 if c is a letter and 0 if otherwise.
 */

int _isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
