#include "main.h"

/**
 * print_alphabet - funtion to print a-z
 * Return: Always return 0
*/
void print_alphabet_x10(void)
{
    int h = 0;
	int i = 97;

    for (h = 0; h <= 10; h++)
    {
        for (i = 97; i <= 122; i++)
        {
            _putchar(i);
        }
        _putchar('\n');
    }
}
