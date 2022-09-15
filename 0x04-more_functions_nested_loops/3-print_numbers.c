#include "main.h"
/**
 * print_numbers - function that checks for uppercase character.
 * @c: the character to be printed
 * Return: 0
*/

void print_numbers(void)
{
char c = '0';

while (c <= '9')
{
_putchar(c);
c++;
}
_putchar('\n');
}
