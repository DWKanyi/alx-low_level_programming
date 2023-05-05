#include "main.h"

/**
 * _strcmp - Function that compares two strings
 *
 * @s1: Pointer to string 1
 * @s2: Pointer to string 2
 *
 * Return: value less than 0 if s1 less than s2
 * value greater than 0 if s1 greater than s2
 * otherwise 0
 */

int _strcmp(char *s1, char *s2)
{
	int cnt, cmp_val;

	cnt = 0;

	while (s1[cnt] == s2[cnt] && s1[cnt] != '\0')
	{
		cnt++;
	}

	cmp_val = s1[cnt] - s2[cnt];
	return (cmp_val);
}
