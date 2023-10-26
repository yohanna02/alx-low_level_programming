#include "main.h"
#include <stddef.h>

/**
 * clear_bit - clear the bit corresponding to the given index
 * @n: number of bits
 * @index: index of the bit
 * Return: bit corresponding to the given index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (n == NULL)
	{
		return (-1);
	}
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
