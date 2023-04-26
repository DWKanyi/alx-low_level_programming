#include <stdio.h>
/**
 * main - Entry point
 * Description - Print single digits of base 10 from 0 with putchar
 * Return: Always 0
 */
int main(void)
{
	int n;
	/* Start of FOR loop counter */
	for (n = 0; n <= 9; n++)
	{
	putchar(n + '0');
	}

	putchar('\n');
	return (0);
}

