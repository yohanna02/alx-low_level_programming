#include "main.h"

/**
 * print_diagonal - print diginal lines
 * @n: number to print
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putcnat('\n')
		}
	}
	else
	{
		_putchar('\n');
	}
}
