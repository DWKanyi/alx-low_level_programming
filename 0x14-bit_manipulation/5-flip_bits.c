#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * needed to flip to get from one number to another
 *
 * @n: 1st evaluated number
 * @m: second evaluated number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;
	unsigned long int i = n ^ m;

	while (i != 0)
	{
		cnt += i & 1;
		i >>= 1;
	}

	return (cnt);
}
