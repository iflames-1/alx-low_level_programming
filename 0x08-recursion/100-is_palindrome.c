#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0') /* Base case: end of the string reached. */
	{
		return (0);
	}

	return (1 + _strlen(s + 1));
	/* Recursive call to calculate the length of the string. */
}

/**
 * is_palindrome_helper - A function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the current substring.
 * @end: The ending index of the current substring.
 *
 * Return: 1 if palindrome, otherwise 0.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end) /* Base case: all characters checked, palindrome found. */
	{
		return (1);
	}

	if (s[start] != s[end])
	/* Check if characters don't match, not a palindrome. */
	{
		return (0);
	}

	/* Recursive call with the next substring. */
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string to check.
 *
 * Return: 1 if palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
