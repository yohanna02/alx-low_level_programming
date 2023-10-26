#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - convert binary to uint
 * @b: binary number to convert
 * Return: Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		result *= 2; /* i.e - result <<= 1 */
		result += (*b - '0');
		b++;
	}

	return (result);
}
