#include "main.h"

/**
 * swap_int - Funtion that swaps values of 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
