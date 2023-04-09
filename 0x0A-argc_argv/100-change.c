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
		if (change == 0 || change < 0)
			break;
		if (change >= 25)
			change -= 25;
		else if (change >= 10)
			change -= 10;
		else if (change >= 5)
			change -= 5;
		else if (change >= 2)
			change -= 2;
		else if (change >= 1)
			change--;
		sum++;
	}
	printf("%d\n", sum);
	return (0);
}
