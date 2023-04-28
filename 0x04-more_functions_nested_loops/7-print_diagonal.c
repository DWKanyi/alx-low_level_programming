#include "main.h"

/**
 * print_diagonal - Drawing a diagonal line on terminal
 * @n: number of \
 * Return: void
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
