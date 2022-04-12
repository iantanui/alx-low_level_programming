#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: variable of data type `struct dog`
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
