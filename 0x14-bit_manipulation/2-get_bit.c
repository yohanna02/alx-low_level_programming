#include "main.h"

/**
 * get_bit - get the bit corresponding to the given index
 * @n: number of bits
 * @index: index of the bit
 * Return: bit corresponding to the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
