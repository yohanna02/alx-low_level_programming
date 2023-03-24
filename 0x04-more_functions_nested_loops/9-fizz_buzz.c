#include "main.h"

void print_string(char string[])
{
	int i;

	i = 0;
	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
}

/**
 * main - entry point
 * Return: Always 0 on success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5) == 0)
		{
			print_string("FizzBuzz");	
		}
		else if (i % 3 == 0)
		{
			print_string("Fizz");
		}
		else if (i % 5 == 0)
		{
			print_string("Buzz");
		}
		_putchar(" ");
	}
	_putchar('\n');

	return (0);
}
