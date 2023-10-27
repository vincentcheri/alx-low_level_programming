#include "main.h"

/**
 * factorial - finds the factorial of a number n
 * Return:  factorial of a number, -1 if n < 0, 1 if n == 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
