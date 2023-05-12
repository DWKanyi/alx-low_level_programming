#include <stdio.h>

/**
 * main - prints the name of the program
 *
 * @argc: number of arguments
 * @argv: argument array
 *
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
