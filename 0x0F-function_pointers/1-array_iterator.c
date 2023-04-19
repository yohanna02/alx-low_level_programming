#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - loop through an array
 * @array: array to loop through
 * @size: size of the array
 * @action: callback function to call
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
