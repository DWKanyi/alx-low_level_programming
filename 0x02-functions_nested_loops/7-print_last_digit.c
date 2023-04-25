#include "main.h"
/**
 * print_last_digit - Prints out the last digit of a number
 * @x: The number to be checked
 * Return: Value of the last digit of the number
 */
int_print_last_digit(int x)
{
	int num;

	num = x % 10;
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');
	return (num);
}
