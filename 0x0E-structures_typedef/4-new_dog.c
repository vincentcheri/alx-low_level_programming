#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that ceates a new dog
 * @name: char var name
 * @age: float var age
 * @owner: char var owner
 * Return: a pointer to the chunk of mem the struct val are stored at
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int a, b, c;
	dog_t *bingo;

	for (a = 0; name[a] != '\0'; a++)
		;
	a++;
	for (b = 0; owner[b] != '\0'; b++)
		;
	b++;
	bingo = malloc(sizeof(dog_t));
	if (bingo == 0)
	{
		free(bingo);
		return (NULL);
	}
	bingo->name = malloc(a * sizeof(bingo->name));
	if (bingo->name == 0)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		bingo->name[c] = name[c];
	bingo->name[c] = name[c];
	bingo->age = age;
	bingo->owner = malloc(b * sizeof(bingo->owner));
	if (bingo->owner == 0)
	{
		free(bingo->owner);
		free(bingo->name);
		free(bingo);
		return (NULL);
	}
	for (c = 0; c < b; c++)
		bingo->owner[c] = owner[c];
	bingo->owner[c] = owner[c];
	return (bingo);
}
