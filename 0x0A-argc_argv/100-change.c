#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: agument count
 * @argv: agument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	while (1)
	{
		if (change == 0)
		{
			break;
		}
		if (change >= 25)
		{
			sum++;
			change -= 25;
		}
		else if (change >= 10)
		{
			sum++;
			change -= 10;
		}
		else if (change >= 5)
		{
			sum++;
			change -= 5;
		}
		else if (change >= 2)
		{
			sum++;
			change -= 2;
		}
		else if (change >= 1)
		{
			sum++;
			change--;
		}
	}
	printf("%d\n", sum);
	return (0);
}
