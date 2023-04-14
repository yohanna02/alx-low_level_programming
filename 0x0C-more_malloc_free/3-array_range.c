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
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min < max; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
