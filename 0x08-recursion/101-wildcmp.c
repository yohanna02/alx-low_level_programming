#include "main.h"

/**
 * wildcmp_helper - prints a string in reverse
 * @s1: the string to print
 * @s2: the string to print
 * Return: int
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
		return (wildcmp_helper(s1, s2 + 1) ||
			(*s1 != '\0' && wildcmp_helper(s1 + 1, s2)));
	if (*s1 != *s2)
		return (0);
	return (wildcmp_helper(s1 + 1, s2 + 1));
}

/**
 * wildcmp - prints a string in reverse
 * @s1: the string to print
 * @s2: the string to print
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}
