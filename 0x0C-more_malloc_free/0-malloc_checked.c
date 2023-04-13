#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - creating memory on the heap
 * @b: size of memory o create
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
