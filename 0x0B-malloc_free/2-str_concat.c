#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings
 *
 * @s1: string 1 to concatenate
 * @s2: string 2 to concatenate
 *
 * Return: concatenated string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	size_t len_s1, len_s2, len_ct;
	size_t i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	len_ct = len_s1 + len_s2;

	concat = malloc(sizeof(char) * (len_ct + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	concat[i] = s1[i];

	for (j = 0; j < len_s2; j++)
	concat[i++] = s2[j];

	concat[len_ct] = '\0';

	return (concat);
}
