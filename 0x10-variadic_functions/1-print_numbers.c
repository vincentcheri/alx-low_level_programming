#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: parameter for string argument
 * @n: parameter for number of arg
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(args, unsigned int));

		if (i != (n - 1) && separator != NULL)
		{

			printf("%s", separator);

		}
	}

	printf("\n");
	va_end(args);
}
