#include <stdio.h>
/**
 * main - Entry point
 * Description - Program that prints all numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int n;
	char abc;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}

	for (abc = 'a'; abc <= 'f'; abc++)
	{
		putchar(abc);
	}

	putchar('\n');

	return (0);
}
