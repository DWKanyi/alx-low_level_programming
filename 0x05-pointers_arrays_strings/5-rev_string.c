#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: String pointer
 * Return: void
 *
 */

void rev_string(char *s)
{
	char tmp;
	int z, half, len;

	for (len = 0; s[len] != '\0'; len++)
	;
	z = 0;
	half = len / 2;

	while (half--)
	{
		tmp = s[len - z - 1];
		s[len - z - 1] = s[z];
		s[z] = tmp;
		z++;
	}
}
