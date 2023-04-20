#include <stdio.h>
/**
 * main - main entry point
 * Return: always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", (long unsigned int)sizeof(char));
	printf("Size of an int: %lu bytes(s)\n", (long unsigned int)sizeof(int));
	printf("Size of a long int: %lu bytes(s)\n", (long unsigned int)sizeof(long int));
	printf("Size of a long long int %lu bytes(s):\n", (long unsigned int)sizeof(long long int));
	printf("Size of a float: %lu bytes(s)\n", (long unsigned int)sizeof(float));
	return (0);
}
