#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: string pointer
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

