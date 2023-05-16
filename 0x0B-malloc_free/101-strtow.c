#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_words - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */

int count_words(char *str)
{
	int count = 0, len = strlen(str), i;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */

char **strtow(char *str)
{
	if (str == NULL || str[0] == '\0')
		return (NULL);

	int len = strlen(str), words = count_words(str), i, j, k = 0, start, end;

	if (words == 0)
		return (NULL);
	char **matrix = malloc(sizeof(char *) * (words + 1));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			start = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			end = i;

			matrix[k] = malloc(sizeof(char) * (end - start + 1));

			if (matrix[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(matrix[j]);
				free(matrix);
				return (NULL);
			}
			strncpy(matrix[k], str + start, end - start);
			matrix[k][end - start] = '\0';
			k++;
		}
	}
	matrix[k] = NULL;
	return (matrix);
}
