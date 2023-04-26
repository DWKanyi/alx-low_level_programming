#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description - Program to print last digit of a stored number
 * Return: Always 0
 */
int main(void)
{
	int n;
	int val;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	val = n % 10;

	if (val > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, val);
	}
	else if (val == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, val);
	}
	else if (val < 6 && val != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, val);
	}
	return (0);
}
