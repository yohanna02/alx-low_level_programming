#include <stdio.h>

/**
 * main - entry function
 * description: Print a - z and A - Z
 * Return: Alway 0
 */
int main(void)
{
	int lower_letter = 97;
	int upper_letter = 65;

	while (lower_letter <= 122)
	{
		putchar(lower_letter);
		lower_letter++;
	}
	while (upper_letter <= 90)
	{
		putchar(upper_letter);
		upper_letter++;
	}
	putchar('\n');
	return (0);
}
