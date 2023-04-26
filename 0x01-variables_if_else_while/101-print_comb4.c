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
int n3 = '0';

while (n1 <= '7')
{
	while (n2 <= '8')
	{
		while (n3 <= '9')
		{
		if (n1 < n2 && n2 < n3)
		{
			putchar(n1);
			putchar(n2);
			putchar(n3);

			if (!(n1 == '7' && n2 == '8' && n3 == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
		n3++;
	}
	n3 = '0';
	n2++;
}
n2 = '0';
n1++;
}
putchar('\n');
return (0);
}
