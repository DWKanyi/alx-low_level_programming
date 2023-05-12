#include "main.h"

/**
 * _strncpy - Function that copies a string
 *
 * @dest: Destination string pointer
 * @src: Source string pointer
 * @n: Number of bytes
 *
 * Return: Pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cnt;

	for (cnt = 0; cnt < n && src[cnt] != '\0'; cnt++)
	{
		dest[cnt] = src[cnt];
	}

	for (; cnt < n; cnt++)
	{
		dest[cnt] = '\0';
	}

		return (dest);
}
