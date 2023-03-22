#include "main.h"

/**
 * print_last_digit - gets the last digit of a number
 * @n: The number to get the last digit
 *
 * Return: the last digit of @n
 */
int print_last_digit(int n)
{
	int abs_value;

	if (n < 0)
		abs_value = -n;
	int last_digit = abs_value % 10;

	return (last_digit);
}
