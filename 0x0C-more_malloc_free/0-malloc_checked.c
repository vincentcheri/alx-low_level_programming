#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of block of memory to be allocated
 * Return: pointer to the memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}

