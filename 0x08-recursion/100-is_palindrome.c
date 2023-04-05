#include "main.h"

/**
 * is_palindrome_helper - prints a string in reverse
 * @s: the string to print
 * @start: the string to print
 * @end: the string to print
 * Return: int
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return 1;
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - prints a string in reverse
 * @s: the string to print
 * Return: int
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
