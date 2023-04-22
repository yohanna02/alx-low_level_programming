#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - Addition function
 * @a: first number
 * @b: second number
 * Return: sum of a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction function
 * @a: first number
 * @b: second number
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division function
 * @a: first number
 * @b: second number
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo function
 * @a: first number
 * @b: second number
 * Return: reminder of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		exit(100);
	}
	return (a % b);
}
