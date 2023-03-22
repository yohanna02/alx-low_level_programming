#include "main.h"
#include <limits.h>

/**
 * print_last_digit - gets the last digit of a number
 * @n: The number to get the last digit
 *
 * Return: the last digit of @n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	
	if (last_digit < 0)
		last_digit = -last_digit;
	printf("%d", last_digit);
	return (last_digit);
}
