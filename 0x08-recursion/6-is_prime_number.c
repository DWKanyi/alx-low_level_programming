#include "main.h"

/**
 * is_prime_number - Function that returns
 * the input integer if a prime number
 *
 * @n: Evaluated integer
 *
 * Return: 1 if n is a prime number,
 * otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_number(n, n - 1));
}

/**
 * prime_number - Calculates if value
 * is a prime number
 *
 * @n: Evaluated integer
 * @i: Iterator
 *
 * Return: 1 if n is a prime number,
 * otherwise 0
 */

int prime_number(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	return (prime_number(n, i - 1));
}
