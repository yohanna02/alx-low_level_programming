#include "main.h"

/**
 * flip_bits - counts the number of bits to be flipped
 * @n: number of bits
 * @m: Number to reach
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int x = n ^ m;

	while (x)
	{
		i += x & 1;
		x >>= 1;
	}

	return (i);
}
