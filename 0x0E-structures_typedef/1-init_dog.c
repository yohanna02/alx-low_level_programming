#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Init dog struct
 * @d: pointer to struct
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
