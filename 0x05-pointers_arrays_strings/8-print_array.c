#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * this is followed by a new line
 * @a: Input array
 * @n: Length of array
 * Return: void
 */

void print_array(int *a, int n)
{
	int idx_array;

	for (idx_array = 0; idx_array < n; idx_array++)
	{

		printf("%d", a[idx_array]);
		if (idx_array != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
