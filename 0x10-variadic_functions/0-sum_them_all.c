#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all arg
 * @n: number of item to sum
 * Return: sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_list arg_list;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_list, int);
	}
	va_end(arg_list);
	return (sum);
}
