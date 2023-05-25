#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Summation of 2 numbers
 * @a: first number.
 * @b: second number.
 *
 * Return: Result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtraction of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: Result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplication of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: Result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Division of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Remainder of division of 2 numbers
 * @a: first number
 * @b: second number
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
