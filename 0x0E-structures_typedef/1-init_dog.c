#include "dog.h"

/**
 *init_dog - initiialzies a varaiable of type struct dog
 * @d: pointer to dog structure
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to owner name
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}