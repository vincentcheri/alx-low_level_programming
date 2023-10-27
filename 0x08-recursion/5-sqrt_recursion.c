#include "main.h"

/**
 * sqrt_check - checks for the square root of c
 * @g: guess at sqrt
 * @c: number to find sqrt of.
 * Return: -1 or sqrt of c
 */


int sqrt_check(int g, int c)
{
	if (g * g == c)
		return (g);
	if (g * g > c)
		return (-1);
	return (sqrt_check(g + 1, c));
}


/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 * Return: the square root of number n and -1 if n has no square root.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}


