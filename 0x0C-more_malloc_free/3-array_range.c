#include "main.h"
#include <stdlib.h>

/**
 * array_range - creating an array
 * @min: number
 * @max: number
 * Return: int pointer
 */
int *array_range(int min, int max)
{
	int i;
	int j;
	int *ptr;
	int diff;

	if (min > max)
	{
		return (NULL);
	}
	j = min;
	diff = max - min;
	ptr = malloc(diff * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < diff; i++, j++)
	{
		ptr[i] = j;
	}
	return (ptr);
}
