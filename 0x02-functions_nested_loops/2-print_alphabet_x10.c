#include "main.h"
/**
 * print_alphabet_x10 - Get alphabet x10
 * Description - A program that prints out the alphabet in lower case, 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char abc;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
		_putchar(abc);
		}
		_putchar('\n');
	}
}

