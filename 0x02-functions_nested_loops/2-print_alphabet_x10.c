#include "main.h"
/**
 * print_alphabet_x10 - prints a-z ten times
 * @n - holds value 0-9 total count of ten
 * @m - holds a-z and when put in the first loop iterate ten times
 *
*/
void print_alphabet_x10(void)
{
char n, m;
for (n = 48; n < 58; n++)
{
for (m = 'a'; m <= 'z'; m++)
{
_putchar(m);
}
_putchar('\n');
}
}
