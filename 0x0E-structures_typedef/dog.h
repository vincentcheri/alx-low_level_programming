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

#endif /* MAIN_H */
