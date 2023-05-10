#include "main.h"

/**
 * _strlen_recursion - Function that returns
 * the length of a string
 *
 *@s: Evaluated string
 *
 *Return: length of string
 *
 */

int _strlen_recursion(char *s)
{
	int str = 0;

	if (*s)
	{
		str++;
		str += _strlen_recursion(s + 1);
	}
	return (str);
}
