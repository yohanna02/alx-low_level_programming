#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - print someone's name
 * @name: name to print
 * @f: callback function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
	{
		f(name);
	}
}
