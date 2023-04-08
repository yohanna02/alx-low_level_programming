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
	int first_num;
	int second_num;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	first_num = atoi(argv[1]);
	second_num = atoi(argv[2]);
	printf("%d\n", first_num * second_num);
	return (0);
}
