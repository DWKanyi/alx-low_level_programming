#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: Pointer to array
 * @n: Number of elements in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, cnt;

	n = n - 1;
	cnt = 0;

	while (cnt <= n)
	{
		temp = a[cnt];
		a[cnt++] = a[n];
		a[n--] = temp;
	}
}
