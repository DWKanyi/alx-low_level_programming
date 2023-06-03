#include <stdio.h>

void first_print(void) __attribute__((constructor));

/**
 * first_print - function that prints the hardcoded message
 * before executing the main function
 *
 * Return: void
 */

void first_print(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
