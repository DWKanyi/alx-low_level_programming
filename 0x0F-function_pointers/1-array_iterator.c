#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Function that executes another function
 * which gives a parameter on each element of an array
 *
 * @array: actual array
 * @size: size of array
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
		return;

	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
