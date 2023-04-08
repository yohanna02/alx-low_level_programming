#include "main.h"

/**
 * rot13 - encrypts a string
 * @s: string to encrypt
 * Return: pointer to @s
 */
char *rot13(char *s)
{
	int *p = s;

	while (*p)
	{
		if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
		{
			*p -= 13;
			p++;
			continue;
		}
		*p += 13;
	}
	return (s);
}
