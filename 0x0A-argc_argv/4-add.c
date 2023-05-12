#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Checks if a string contains only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */

int check_num(const char *str)
{
	/* Declare variables. */
	unsigned int i;

	/* Loop through the string, checking each character. */
	for (i = 0; str[i]; i++)
	{
		if (!isdigit(str[i]))
		{
			/* Return 0 if any character is not a digit. */
			return (0);
		}
	}

	/* Return 1 if all characters are digits. */
	return (1);
}

/**
 * main - Prints the sum of all the numbers in the command line arguments.
 * @argc: The number of command line arguments.
 * @argv: The command line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	/* Declare variables. */
	int i;
	int sum = 0;

	/* Loop through the command line arguments. */
	for (i = 1; i < argc; i++)
	{
		/* Check if the argument is a number. */
		if (check_num(argv[i]))
		{
			/* Add the number to the sum. */
			sum += atoi(argv[i]);
		}

		else
		{
			/* Print an error message and return (1). */
			printf("Error\n");
			return (1);
		}
	}

	/* Print the sum. */
	printf("%d\n", sum);

	/* Return 0 on success. */

	return (0);
}

