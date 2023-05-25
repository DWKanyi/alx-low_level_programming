#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator: string to be printed
 * @n: number of strings passed to function
 *
 * Return: void
 *
 * Description: If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil)
 * otherwise, print a new line at the end of the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int idx;
	char *str;

	va_start(ap, n);

	for (idx = 0; idx < n; idx++)
	{
		str = va_arg(ap, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (idx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
