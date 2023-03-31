#include "main.h"

/**
 * leet - Mozart
 * @s: my single parameter
 * Return: pointer to @s
 */
char *leet(char *s)
{
	char *p = s;

	while (*p)
	{
		if (*p == 'a' || *p == 'A')
		{
			*p = '4';
		}
		if (*p == 'e' || *p == 'E')
		{
			*p = '3';
		}
		if (*p == 'o' || *p == 'O')
		{
			*p = '0';
		}
		if (*p == 't' || *p == 'T')
		{
			*p = '7';
		}
		if (*p == 'l' || *p == 'L')
		{
			*p = '1';
		}
		p++;
	}
	return (s);
}
