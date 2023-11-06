#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes members of a struct
 * @d: a pointer to the struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
