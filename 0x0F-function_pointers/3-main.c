#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char  *argv[])
{
	int a, b;
	char* op;
	int ans;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	f = get_op_func(op);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	ans = f(a, b);
	printf("%d\n", ans);
	return (0);
}
