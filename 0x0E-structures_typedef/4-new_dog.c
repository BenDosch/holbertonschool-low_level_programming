#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creats a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: name of the owner of new dog
 * Return: a struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *nname, *nowner;
	int i;
	dog_t *new;

	for (i = 0; name[i] != '\0'; i++)
	{}
	nname = malloc(sizeof(char) * i);
	if (nname == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		nname[i] = name[i];
	nname[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
	{}
	nowner = malloc(sizeof(char) * i);
	if (nowner == NULL)
	{
		free(nname);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		nowner[i] = owner[i];
	nowner[i] = '\0';
	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(nname);
		free(nowner);
		return (NULL);
	}
	new->name = nname;
	new->age = age;
	new->owner = nowner;
	return (new);
}
