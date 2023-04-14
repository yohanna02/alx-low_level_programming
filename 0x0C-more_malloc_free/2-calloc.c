#include "main.h"
#include <stdlib.h>

/**
 * _memset - memset function
 * @s: string to over ride
 * @b: char to over partd of @s
 * @n: number of @s string to over ride
 * Return: pointer to @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	size_t i = 0;

	while (s[i] != '\0' && i < n && b != '\0')
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - recreating calloc
 * @nmemb: number of items
 * @size: size of items
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	_memset(p, 0, nmemb * size);
	return (p);
}
