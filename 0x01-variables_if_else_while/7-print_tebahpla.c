#include <stdio.h>

/**
 * main - entry function
 * description: Prints z - a
 * Return: Alway 0
 */
int main(void)
{
	int number = 122;

	while (number >= 97)
	{
		putchar(number);
		number--;
	}
	putchar('\n');
	return (0);
}
