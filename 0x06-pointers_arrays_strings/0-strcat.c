#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 *
 * @dest: Destination string pointer
 * @src: Source string pointer
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len, a;

	len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (a = 0; src[a] != '\0'; a++, len++)
	{
		dest[len] = src[a];
	}
	dest[len] = '\0';
	return (dest);
}
