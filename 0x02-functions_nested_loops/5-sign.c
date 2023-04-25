#include "main.h"
/**
 * print_sign - Checks the sign of a number
 * @n: Number to be checked
 * Return: 1 if n is positive, 0 if n is zero, -1 if in is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
