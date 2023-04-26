#include <stdio.h>
/**
 * main - Entry point
 * Description - A program to print lowercase alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char abc;
	/* Start of FOR loop */
	for (abc = 'z'; abc >= 'a'; abc--)
	{
		putchar(abc);
	}
	putchar('\n');

	return (0);
}
