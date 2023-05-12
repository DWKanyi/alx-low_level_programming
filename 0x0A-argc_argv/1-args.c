#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to it
 *
 * @argc: number of arguments
 * @argv: argument array
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])

{
(void) argv;

printf("%d\n", argc - 1);

return (0);
}

