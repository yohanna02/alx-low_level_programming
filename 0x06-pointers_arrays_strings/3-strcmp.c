#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (1)
	{
		if (s1[i] == s2[i])
		{
			if (s1[i] == '\0' && s2[i] == '\0')
			{
				break;
			}
			i++;
			continue;
		}

	}
	if (s1[i] < s2[i])
	{
		return (-1);
	}
	if (s1[i] > s2[i])
	{
		return (1);
	}
	return (0);
}
