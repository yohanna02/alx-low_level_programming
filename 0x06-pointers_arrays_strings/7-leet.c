#include "main.h"

/**
 * leet - Mozart
 * @s: my single parameter
 * Return: pointer to @s
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j += 2)
		{
			if (s[i] == letters[j] || s[i] == letters[j + 1])
			{
				s[i] = numbers[j];
				break;
			}
		}
	}
	return (s);
}
