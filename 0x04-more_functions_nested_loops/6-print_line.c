#include "main.h"

/**
 * print_line - Drawing a straight line in the terminal
 * @n: Line size
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
