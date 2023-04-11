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
 * argstostr - concatinate argument option
 * @ac: Argument count
 * @av: Argument vector
 * Return: pointer to concatinated string
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int total_length;
	int i;
	int j;
	int k;
	int ac_range;
	int length;

	if (ac < 1 || av == NULL)
	{
		return (NULL);
	}
	ac_range = ac - 1;
	for (i = 1; i <= ac_range; i++)
	{
		total_length += _strlen(av[i]);
	}
	string = malloc((sizeof(char) * total_length) + total_length + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0, k = 0; i < ac_range; i++)
	{
		length = _strlen(av[i]);
		for (j = 0; j < length; j++, k++)
		{
			string[k] = av[i][j];
		}
		string[k] = '\n';
	}
	string[k] = '\0';
	return (string);
}
