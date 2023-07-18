#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: 1st member.
 * @age: 2nd member.
 * @owner: 3rd member.
 * Return: Pointer to the new dog struct
 */

	dog_t *new_dog(char *name, float age, char *owner)
	{
	int i, lenN = 0, lenO = 0;

	struct dog *n_dog = NULL;

	while (name[lenN] != '\0')
	lenN++;
	while (owner[lenO] != '\0')
	lenO++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
	return (NULL);
	}

	n_dog->name = malloc(lenN + 1);
	if (n_dog->name == NULL)
	{
	free(n_dog);
	return (NULL);
	}

	n_dog->owner = malloc(lenO + 1);
	if (n_dog->owner == NULL)
	{
	free(n_dog->name);
	free(n_dog);
	return (NULL);
	}

	for (i = 0; i <= lenN; i++)
	n_dog->name[i] = name[i];

	for (i = 0; i <= lenO; i++)
	n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}
