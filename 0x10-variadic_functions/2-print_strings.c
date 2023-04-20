#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print string list
 * @separator: what to separte the number with
 * @n: number of number  s to print
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;
	const char *str;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_list, const char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(arg_list);
}
