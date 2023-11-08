#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the name to be printed
 * @f: pointer function that points to a function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && *name != '\0' && f != 0)
		f(name);
}
