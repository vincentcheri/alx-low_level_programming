#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - function that selects the correct
 * @s: arg to passed to the func as operator
 * Return: an int
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	for (i = 0; i < 5; i++)
	{
		if (*(ops[i].op) == *s && s[0] != '\0')
			return (ops[i].f);
		i++;
	}

	i = 0;

	return (0);
}
