#include "main.h"

/**
 *leet - function that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @s: pointer to string
 *
 * Return: Pointer to s
 *
 */

char *leet(char *s)
{
	int str_len, leetCount;
	char leetLetter[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	str_len = 0;

	while (s[str_len] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{

			if (leetLetter[leetCont] == s[str_len])
			{
				s[str_len] = leenNums[leetCount];
			}
			leetCount++;
		}
		str_len++;
	}
	return (s);
}
