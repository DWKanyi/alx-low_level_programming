#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 *
 * @separator: String to be printed
 * @n: numbers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int idx;

	va_start(ap, n);

	for (idx = 0; idx < n; idx++)
	{
		printf("%d", va_arg(ap, int));

		if (idx != (n - 1) && separator != NULL)

			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
