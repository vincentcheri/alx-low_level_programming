#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of the array to be created
 * @c: the character to which the array will be intialized by
 * Return: a pointer var and Null if size = o
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *)malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	*(p + i) = '\0';

	return (p);
}
