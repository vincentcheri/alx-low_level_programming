#include <stdio.h>
#include <stdlib.h>

/**
*main - prints the name of the file it was compiled from
*return: 0 always
*/
int main()
{
printf("%s", __FILE__);
printf("\n");
return (0);
}
