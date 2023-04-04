#include "main.h"

/**
 * _memset - memset function
 * @s: string to over ride
 * @b: char to over partd of @s
 * @n: number of @s string to over ride
 * Return: pointer to @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	if (s == NULL || n <= 0)
	{
		return (s);
	}
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
