#include "3-calc.h"
#include <string.h>
#include <stddef.h>

/**
 * get_op_func - select operation function
 * @s: operator
 * Return: pointer to operation function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) != 0)
		{
			i++;
			continue;
		}

		return (ops[i].f);
	}

	return (NULL);
}
