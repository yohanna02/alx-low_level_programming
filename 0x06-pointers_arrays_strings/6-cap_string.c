#include "main.h"

/**
 * cap_string - capitalize string
 * @s: string to capitalize
 * Return: pointer to beginning of @s
 */
char *cap_string(char *s)
{
	char *p = s;
	int uppercase = 1;

	while (*p)
	{
		if (*p == ' ' || *p == '\n' || *p == '\t' || *p == ',' ||
		*p == ';' || *p == '.' || *p == '!' || *p == '?' ||
		*p == '"' || *p == '(' || *p == ')' || *p == '{' || *p == '}')
		{
			uppercase = 1;
		}

		if (*p >= 'a' && *p <= 'z' && uppercase)
		{
			*p -= 32;
			uppercase = 0;
		}
		p++;
	}
	return (s);
}
