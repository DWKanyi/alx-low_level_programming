#include "main.h"
/**
 * _islower - Finds the lowercase characters
 * @c: Character that will be checked
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
