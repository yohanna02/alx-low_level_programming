#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print struct dog info
 * @d: struct to print
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s", d->name != NULL ? d->name : "(nil)");
		if (d->age == NULL)
		{
			printf("Age: %s", "(nil)");
		}
		else
		{
			printf("Age: %.6f", d->age);
		}
		printf("Owner: %s", d->owner != NULL ? d->owner : "(nil)");

	}
}
