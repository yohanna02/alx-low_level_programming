#include "main.h"

/**
 * string_toupper - converts string to upper case
 * @s: string to convert
 * Return: pointer to @s
 */
char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 97 && *s < 122)
		{
			*s = *s - 32;
		}
		s++;
	}
	return (s);
}
