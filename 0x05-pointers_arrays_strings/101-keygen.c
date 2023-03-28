#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
    int i;
    char password[9];
    unsigned int seed;

    seed = (unsigned int)time(NULL);
    srand(seed);

    for (i = 0; i < 8; i++)
        password[i] = rand() % 94 + 33;
    password[8] = '\0';

    printf("%s\n", password);
    return (0);
}
