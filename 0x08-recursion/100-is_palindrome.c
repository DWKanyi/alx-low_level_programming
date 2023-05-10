#include "main.h"

int _palindrome(char *s, int i, int len);
int strlen(char *s);

/**
 * is_palindrome - Function to check if
 * the provided string is a palindrome
 *
 * @s: Evaluated string
 *
 * Return: 1 if string is a palindrome
 * Otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (_palindrome(s, 0, strlen(s)));
}

/**
 * strlen - Gets string length
 *
 * @s: Evaluated string
 *
 * Return: Length of string
 */

int strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + strlen(s + 1));
}

/**
 * _palindrome - Checks if string is
 * a palindrome
 *
 * @s: Evaluated string
 * @i: Iterator
 * @len: Length of string
 *
 * Return: 1 for palindrome, otherwise 0
 */

int _palindrome(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);

	return (_palindrome(s, i + 1, len - 1));
}
