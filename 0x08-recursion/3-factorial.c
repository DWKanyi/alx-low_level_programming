#include "main.h"

/**
 * factorial - Function that returns
 * the factorial of a given number
 *
 * @n: Evaluated integer
 *
 * Return: -1 for value n < 0 (error),
 * Otherwise the factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
