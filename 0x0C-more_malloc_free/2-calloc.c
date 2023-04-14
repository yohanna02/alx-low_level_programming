#include "main.h"
#include <stdlib.h>

/**
 * _calloc - recreating calloc
 * @nmemb: number of items
 * @size: size of items
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	size_t i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);
}
