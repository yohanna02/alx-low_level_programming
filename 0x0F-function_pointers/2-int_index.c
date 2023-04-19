#include "function_pointers.h"

/**
 * int_index - find array index
 * @array: array to check
 * @size: array size
 * @cmp: function to run
 * Return: index of item found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}

	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);

}
