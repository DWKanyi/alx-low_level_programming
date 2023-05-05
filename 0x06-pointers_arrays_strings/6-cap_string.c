#include "main.h"

/**
 * cap_string - Function that capitalises all words of a string
 *
 * @s: Pointer to string
 *
 * Return: Value S
 */

char *cap_string(char *s)
{
	int str_cnt;

	str_cnt = 0;

	while (s[str_cnt] != '\0')
	{
		if (s[0] <= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}

		if (s[str_cnt] == ' ' || s[str_cnt] == ';' || s[str_cnt] == '\n'
		|| s[str_cnt] == ',' || s[str_cnt] == ';' || s[str_cnt] == ','
		|| s[str_cnt] == '.' || s[str_cnt] == '|' || s[str_cnt] == '?'
		|| s[str_cnt] == '"' || s[str_cnt] == '(' || s[str_cnt] == ')'
		|| s[str_cnt] == '{' || s[str_cnt] == '}')
		{
			if (s[str_cnt + 1] >= 97 && s[str_cnt + 1] <= 122)
			{
				s[str_cnt + 1] = s[str_cnt + 1] - 32;
			}
		}
		str_cnt++;
	}
	return (s);
}
