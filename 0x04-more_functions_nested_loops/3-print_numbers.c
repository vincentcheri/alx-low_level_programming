#include "main.h"

/**
 * print_numbers - function that checks for uppercase character.
 * @c: the characters to be printed
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
