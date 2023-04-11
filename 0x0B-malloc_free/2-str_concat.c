#include "main.h"
#include <stdlib.h>

/**
 * _strlen - count the length of a string
 * @s: the string to count
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - joins two string together
 * @s1: first string
 * @s2: second string
 * Return: pointer to joined string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int new_len = len1 + len2;
	char *string = malloc((sizeof(char) * new_len) + 1);
	int i;
	int j;

	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		string[i] = s1[i];
	}
	for (j = 0; j < len2; j++, i++)
	{
		string[i] = s2[j];
	}
	string[i] = '\0';
	return (string);
}
