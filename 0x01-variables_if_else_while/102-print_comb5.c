#include <stdio.h>

/**
 * main - entry function
 * description: Prints 0 - 9
 * Return: Alway 0
 */
int main(void)
{
	int number = 48;
	int number2 = 48;
	int number3 = 48;
	int number4 = 49;

	while (number <= 57)
	{
		while (number2 <= 56)
		{
			while (number3 <= 57)
			{
				while (number4 <= 57)
				{
					putchar(number);
					putchar(number2);
					putchar(' ');
					putchar(number3);
					putchar(number4);
					number4++;
					if ((number + number2 + number3 + number4) != 228)
					{
						putchar(',');
						putchar(' ');
					}
				}
				number3++;
				number4 = 48;
			}
			number2++;
			number3 = number;
			number4 = number2 + 1;
		}
		number++;
		number2 = 48;
		number3 = number;
		number4 = number2 + 1;
	}
	putchar('\n');
	return (0);
}
