#include "main.h"

/**
 * _puts_recursion - puts function with
 * recursion
 * @s: string to print
 * Return: void
 */
void _puts_recursion(char *s)
{
	char *p = s;

	if (*p != '\0')
	{
		_putchar(*p);
		_puts_recursion(p + 1);
	}
	_putchar('\n');
}
