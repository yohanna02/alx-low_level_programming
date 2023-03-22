#include "main.h"

/**
 * print_to_98 - prints natural number to 98
 * @n: number to start counting
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i >= 10)
		{
			_putchar(1 / 10 + '0');
		}
		_putchar(i % 10 + '0');
		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
