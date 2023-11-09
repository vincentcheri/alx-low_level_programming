#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to int array
 * @size: size of the array
 * @cmp: pointer to a func that return an int
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;



	if (array != 0 && cmp != 0 && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	else
	{
		return (-1);
	}

	return (-1);
}
