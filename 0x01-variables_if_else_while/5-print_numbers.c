#include <stdio.h>
/**
 * main - Entry point
 * Description - A program that prints all single numbers of base 10 from 0
 * Return: Always 0
 */
int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%d", num);
		num += 1;
	}
	printf("\n");
	return (0);
}
