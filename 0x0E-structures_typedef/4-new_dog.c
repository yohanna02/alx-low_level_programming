#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copy string from one source to another
 * @dest: where to copy the string to
 * @src: from where to copy the string
 * Return: point to the @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner's name
 * Return: new Dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char n[50];
	char o[50];
	dog_t *dp = malloc(sizeof(dog_t));

	if (dp == NULL)
	{
		return (NULL);
	}
	_strcpy(n, name);
	_strcpy(o, owner);

	dp->name = n;
	dp->age = age;
	dp->owner = o;
	return (dp);
}
