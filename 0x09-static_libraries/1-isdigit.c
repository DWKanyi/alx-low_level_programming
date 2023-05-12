#include "main.h"

/**
 * _isdigit - Checks for digit; 0 through to 9
 * @c: Character to be checked
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
