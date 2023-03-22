#include "main.h"

/**
 * update - update counter
 * @n: number to update
 * Return: void
 */
void update(int *n)
{
	if (n > 98)
		*n--;
	else
		*n++;
}

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
		int more_tens = 0;
		int ones = n % 10;
		int temp;

		if (n < 0)
		{
			_putchar('-');
			tens *= -1;
			ones *= -1;
		}
		if (tens >= 10)
		{
			temp = tens;
			more_tens = tens / 10;
			tens = temp % 10;
			if (more_tens > 0)
			{
				_putchar(more_tens + '0');
			}
			_putchar(tens + '0');
		}
		else if (tens > 0)
		{
			_putchar(tens + '0');
		}
		_putchar(ones + '0');
		_putchar(',');
		_putchar(' ');
		update(&n);
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
