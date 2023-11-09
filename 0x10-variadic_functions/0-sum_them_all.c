#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all param
 * @n: number of the arguments to be passed
 * Return: sum of all the numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum;
	unsigned int i;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}

	va_end(args);
	return (sum);
}
