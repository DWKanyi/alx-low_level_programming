#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 *
 * @n: evaluated number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;
	int cnt = 0;
	int size_bits = sizeof(unsigned long int) * 8;

	for (i = size_bits - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			cnt++;
		}

		else if (cnt)
			_putchar('0');
	}

	if (!cnt)
		_putchar('0');
}
