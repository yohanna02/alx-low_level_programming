#include <stdio.h>

/**
 * main - entry function
 * description: Prints 0 - 9
 * Return: Alway 0
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
