#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description - A program that prints out the alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	int alphabt = 'a';
	/* Start of WHILE loop execution*/
	while (alphabt <= 'z')
	{
		if (alphabt == 'e' || alphabt == 'q')
		{
			alphabt += 1;
		}
		else
		{
			putchar(alphabt);
			alphabt += 1;
		}
	}
	putchar('\n');
	return (0);
}

