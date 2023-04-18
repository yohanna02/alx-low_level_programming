#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free my dog
 * @d: dog to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
