#ifndef DOH_H
#define DOG_H

/**
 * struct dog - a dog with a name age and owner
 * @name: Dogs name
 * @age: Dogs age
 * @owner: Dog's owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
