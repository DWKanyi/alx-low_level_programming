#include "main.h"

/**
 * get_bit - function that returns the value
 * of a bit at a given index
 *
 * @n: evaluated number
 * @index: is the index, starting from 0 of
 * the evaluated bit
 *
 * Return: value of the bit at index index, otherwise
 * -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	result = (n >> index) & 1;

	return (result);
}
