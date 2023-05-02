#include "main.h"

/**
 * puts_half - Prints half a string
 * @str: String pointer
 * Return: void
 */

void puts_half(char *str)
{
	int f_str, h_str;

	f_str = 0;

	while (str[f_str] != '\0')
		f_str++;
	h_str = f_str / 2;

	if (f_str % 2 == 1)
		h_str++;

	while (h_str < f_str)
	{
		_putchar(str[h_str]);
		h_str++;
	}
	_putchar('\n');
}
