#include "main.h"

/**
 * _isupper - Function for checking lowercase letters
 * @c: Letter to be checked
 * Return: 1 for uppercase letter, 0 for others
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
