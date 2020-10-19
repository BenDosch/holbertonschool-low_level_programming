B#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees a structure dog
 * @d: pointer to a dog structure
 * Return: none
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
