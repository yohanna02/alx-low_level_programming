#include <stdio.h>

/**
 * main - Entry point
 * @argc: agument count
 * @argv: agument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	argv[0] = "d";
	printf("%d\n", argc - 1);
	return (0);
}
