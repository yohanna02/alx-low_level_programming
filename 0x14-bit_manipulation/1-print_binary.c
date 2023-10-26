#include "main.h"

/**
 * print_binary - print the binary representation
 * of a number
 * @n: Number to print out as a binary string
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
