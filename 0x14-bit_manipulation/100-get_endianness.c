#include "main.h"

/**
 * get_endianness - get the endianness
 * Return: void
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
