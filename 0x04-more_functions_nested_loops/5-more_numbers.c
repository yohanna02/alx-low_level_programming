#include "main.h"

/**
 *  more_numbers- prints the number 0 - 14
 * Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
			_putchar((i / 10) + '0');

		_putchar((i % 10) + '0');
	}

	_putchar('\n');
}
