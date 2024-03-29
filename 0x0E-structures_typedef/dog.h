#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains dog info
 * @name: dogs name
 * @age: dogs age
 * @owner: the name of the dog's owner
 * Description: this struct encapsulate's the name,age and owner of a dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MAIN_H */
