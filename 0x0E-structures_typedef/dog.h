#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - A dog struct
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /*_DOG_H*/
