#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function to print a name
 *
 * @name: evaluated string
 * @f: function pointer
 *
 * Return: void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
