#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry function
 * description: gets the last digit of number and compares it
 * Return: Always 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else if (n < last_digit && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less ", n, last_digit);
		printf("than 6 and not 0\n");
	}
	return (0);
}
