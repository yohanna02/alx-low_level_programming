#include "main.h"

/**
 * times_table - prints times table
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product < 10 && j != 0)
			{
				_putchar(' ');
			}
			if (product >= 10)
			{
				_putchar(product / 10 + '0');
			}
			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}
