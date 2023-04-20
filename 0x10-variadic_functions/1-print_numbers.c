#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print number list
 * @separator: what to separte the number with
 * @n: number of number  s to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;
	int j;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(arg_list, int);
		printf("%d", j);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s ", separator);
		}
	}
	putchar('\n');
	va_end(arg_list);
}
