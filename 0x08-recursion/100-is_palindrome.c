#include "main.h"

/**
 *_strlen_recursion -  returns the length of a string
 *@s: pointer to string
 *Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 *check_palindrome - checks if its palindrome
 *@s: string to check
 *@start: string of start
 *@end: end of string
 *Return: 1 if a string is a palindrome and 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 *is_palindrome - checks if a string is palindrome
 *@s: string to check
 *Return: 1 if it is palindrome and 0 if otherwise
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s);
	if (i <= 1)
	{
		return (1);
	}
	return (check_palindrome(s, 0, i - 1));
}
