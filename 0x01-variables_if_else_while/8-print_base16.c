#include <stdio.h>

/**
 * main - entry function
 * description: Prints 0 - 9
 * Return: Alway 0
 */
int main(void)
{
	int number = 48;
	int letter = 97;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	while (letter <= 102)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
