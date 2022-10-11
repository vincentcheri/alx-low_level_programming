#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the name of the file it was compiled from
* Return: 0 always
*/

int main()
{
printf("%s", __FILE__);
printf("\n");
return (0);
}
