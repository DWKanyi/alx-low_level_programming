#include "main.h"
#include <stdlib.h>

/**
 * argstoptr - concatenate all arguments of a program
 *
 * @ac: number of ptrings
 * @av: array of ptrings
 *
 * Return: pointer to the new ptring, or NULL on failure
 */

char *argstoptr(int ac, char **av)
{
	int i, j, k;
	int len = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
		len++;
	}
	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j] != '\0')
		{
			ptr[k] = av[i][j];
			k++;
			j++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
