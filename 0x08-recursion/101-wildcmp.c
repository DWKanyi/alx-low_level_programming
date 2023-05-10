#include "main.h"

/**
 * wildcmp - Function that compares
 * two strings
 *
 * @s1: Evaluated 1st string
 * @s2: Evaluated 2nd string
 *
 * Return: 1 if strings are identical,
 * otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0)
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
