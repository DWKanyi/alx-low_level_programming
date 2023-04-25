#include "main.h"
/**
 * _isalpha - Finds the alphabetic characters
 * @c: Character that will be checked
 * Return: 1 if c is an aplhabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
}
