#include <stdio.h>

/**
 * main - entry function
 * description: Prints 0 - 9
 * Return: Alway 0
 */
int main(void)
{
	int number = 48;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
