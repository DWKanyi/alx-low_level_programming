#include "main.h"
#include <stdio.h>

/**
 * main - Print out the numbers 1 to 100
 *
 * Description - Fizz for multiples of 3,
 * Buzz for multiples of 5,
 * and FizzBuzz for multiples of 3 and 5
 *
 * Return: 0 for success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");

		else if (i % 3 == 0)
			printf("Fizz");

		else if (i % 5 == 0)
			printf("Buzz");

		else
			printf("%i", i);

		if (i < 100)
			printf(" ");
	}

	printf("\n");
	return (0);
}
