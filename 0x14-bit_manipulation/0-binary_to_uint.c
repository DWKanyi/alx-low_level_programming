#include "main.h"
/**
 * binary_to_uint - function that converts a
 * binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * 0 if there is one or more chars in the string b that is not 0 or 1
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);

		/* shifting through bits and setting correct values */
		res = (res << 1) | (b[i] - '0');
	}

	return (res);
}
