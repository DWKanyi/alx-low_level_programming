#include "main.h"
/**
 * print_alphabet - Get alphabet
 * Description - A program that prints out the alphabet in lower case
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	int i;
	/* Start of for loop execution*/
	for (i = 97; i < 122; i++)
	{
		my_putchar(i);
	}
	my_putchar('\n');
}

