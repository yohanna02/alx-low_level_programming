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
 * _strcpy - copy string from one source to another
 * @dest: where to copy the string to
 * @src: from where to copy the string
 * Return: point to the @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - duplicate string
 * @str: string to duplicate
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	int length;
	char *string;

	if (str == NULL)
	{
		return (NULL);
	}
	length = _strlen(str);
	string = malloc((sizeof(char) * length) + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	_strcpy(string, str);
	return (string);
}
