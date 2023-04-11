#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to create an array
 * @size: size of the array
 * @c: character to fill the array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	string = malloc(sizeof(char) * size);
	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		string[i] = c;
	}
	return (string);
}
