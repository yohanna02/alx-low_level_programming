#include <stdio.h>
#include "main.h"

/**
 * print_array - printts item in an array
 * @a: the array to print
 * @n: the number of items in the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
