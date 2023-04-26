#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description - A program that prints out the alphabet in lower case
 * Return: Always 0
 */
int main(void)
{
	char abc;
	char ABC;
	/* Start of FOR loop execution*/
	for (abc = 'a'; abc <= 'z'; abc++)
	{
		putchar(abc);
	}
	for (ABC = 'A'; ABC <= 'Z'; ABC++)
	{
		putchar(ABC);
	}

	putchar('\n');
	return (0);
}


