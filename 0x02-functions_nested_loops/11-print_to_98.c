#include "main.h"

/**
 * print_to_98 - prints natural number to 98
 * @n: number to start counting
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		int tens = n / 10;
		int ones = n % 10;

		if (n < 0)
		{
			_putchar('-');
			tens *= -1;
			ones *= -1;
		}
		if (tens > 0)
		{
			_putchar(tens + '0');
		}
		_putchar(ones + '0');
		_putchar(',');
		_putchar(' ');
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
