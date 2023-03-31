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
			*p = 52;
		}
		else if (*p == 'e' || *p == 'E')
		{
			*p = 51;
		}
		else if (*p == 'o' || *p == 'O')
		{
			*p = 48;
		}
		else if (*p == 't' || *p == 'T')
		{
			*p = 55;
		}
		else if (*p == 'l' || *p == 'L')
		{
			*p = 49;
		}
		p++;
	}
	return s;
}
