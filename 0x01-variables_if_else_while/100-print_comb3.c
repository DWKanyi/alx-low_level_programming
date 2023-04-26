#include <stdio.h>
/**
 * main - Entry point
 * Description - Program to print different combinations of 2 numbers
 * Return: Always 0
 */
int main(void)
{
int n1 = '0';
int n2 = '0';

while (n1 <= '9')
{
	while (n2 <= '9')
	{
		if (!(n1 > n2) || n1 == n2)
		{
			putchar(n1);
			putchar(n2);

			if (n1 == '8' && n2 == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		n2++;
	}
	n2 = '0';
	n1++;
	}
	return (0);
}
