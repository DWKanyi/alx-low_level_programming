#include "main.h"
/**
 * _abs - Calculates the absolute value of an integer
 * @c: The integer to be checked
 * Return: 0 or absolute value of integer
 */
int _abs(int c)

	/* IF condition statement*/
	if (c < 0)
	{
	int val;

	val = (c * -1);
	return (val);
	}

	return (c);

}
