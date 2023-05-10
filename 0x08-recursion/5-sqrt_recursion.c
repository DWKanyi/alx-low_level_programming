#include "main.h"

/**
 * real_sqrt_recursion - Recursion to get the
 * real square root
 *
 * @n: Evaluated number
 * @i: Iterator
 *
 * Return: Square root value
 */

int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Function that returns the
 * natural square root of a number
 *
 * @n: Evaluated integer
 *
 * Return: -1 if square root is < 0
 * Otherwise square root result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - Recursion to get the
 * real square root
 *
 * @n: Evaluated number
 * @i: Iterator
 *
 * Return: Square root value
 */

int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (real_sqrt_recursion(n, i + 1));
}
