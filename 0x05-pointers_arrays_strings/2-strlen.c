#include "main.h"

/**
 * _strlen - Function to get length of string
 * @s: string to be checked
 * Return: string length
 */

int _strlen(char *s)
{
	int str_len = 0;

	while (s[str_len])
	str_len++;

	return (str_len);
}
