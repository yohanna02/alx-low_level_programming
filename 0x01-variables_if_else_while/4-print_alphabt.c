#include <stdio.h>

/**
 * main - entry function
 * description: Print a - z, but except q and e
 * Return: Alway 0
 */
int main(void)
{
	int letter = 96;

	while (letter < 122)
	{
		letter++;
		if (letter == 'q' || letter == 'e')
			continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
