#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i = 0;

printf("Infinite loop incoming :(\n");

while (i < 10)

{
putchar(i);
i++;
}

printf("Infinite loop avoided! \\o/\n");

return (0);
}
