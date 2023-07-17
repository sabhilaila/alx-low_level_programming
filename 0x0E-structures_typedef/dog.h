#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include "dog.h"

/**
 * int_dog - struct dog
 * @d: pointer to struct dog to initailize
 * @name: name to initialise
 * @age: age to initialize
 * @owner: owner to initialize
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
