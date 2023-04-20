#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_comma - print comma and space
 * @format: datatype format
 * @i: current position
 * @j: previous position
 * Return: void
 */
void print_comma(const char * const format, int *i, int *j)
{
	*j = *i;
	*i++;
	if ((format[*i]) &&
	(format[*j] == 'c' ||
	 format[*j] == 'i' ||
	 format[*j] == 'f' ||
	 format[*j] == 's'))
	{
		printf(", ");
	}
}

/**
 * print_all - print any datatype
 * @format: format of type
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arg_list;
	int i = 0;
	int j;
	char *str;

	va_start(arg_list, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg_list, int));
				break;
			case 'i':
				printf("%d", va_arg(arg_list, int));
				break;
			case 'f':
				printf("%f", va_arg(arg_list, double));
				break;
			case 's':
				str = va_arg(arg_list, char *);
				if (str == NULL)
				{
					printf("(nil)");
					print_comma(format, &i, &j);
					continue;
				}
				printf("%s", str);
				break;
		}
		print_comma(format, &i, &j);
	}
	putchar('\n');
	va_end(arg_list);
}
