#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns
 * a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: char
 *
 * Return: Pointer to duplicated string
 * Otherwise NULL if str = NULL/insufficient memory
 */

char *_strdup(char *str)

{

	char *ptr;
	int i, n = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	ptr = malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		ptr[n] = str[n];

	return (ptr);
}

