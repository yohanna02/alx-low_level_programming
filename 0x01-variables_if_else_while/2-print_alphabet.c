#include <stdio.h>

/**
 * main - entry function
 * description: Print a - z
 * Return: Alway 0
 */
int main(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
