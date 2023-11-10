#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints a strings
 * @separator: the string to be printed between strings
 * @n: is the number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *string_atm;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string_atm = va_arg(args, char *);

		if (string_atm == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", string_atm);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
