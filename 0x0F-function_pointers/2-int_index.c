#include "function_pointers.h"

/**
 * int_index - Function that returns the index
 * condition being the cmp function does not return 0
 *
 * @array: actual array
 * @size: size of array
 * @cmp: pointer to func of one of the 3 in main
 *
 * Return: 0 if successful, otherwise -1 if no element in @size
 * matches or if @size is <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}
