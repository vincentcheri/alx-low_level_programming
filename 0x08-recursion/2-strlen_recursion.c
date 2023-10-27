#include "main.h"

/**
 * _strlen_recursion - finds the len of a string using recursion
 * @s: the string to calculate len from
 * Return: len of string and 0 if *s == '\0'
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
