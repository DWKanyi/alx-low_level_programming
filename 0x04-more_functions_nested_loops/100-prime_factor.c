#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description - Find and print largest prime factor
 * Number is 612852475143
 *
 * Return: 0 for success
 */

int main(void)
{
	unsigned long int i;
	unsigned long int n = 612852475143;

	for (i = 3; i <= n; i = i + 2)
	{

		while ((n % i == 0) && (n != i))
			n = n / i;
	}

	printf("%lu\n", n);

	return (0);
}
