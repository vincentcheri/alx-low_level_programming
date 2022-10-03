#include <stdio.h>

/**
*main - Prints the number of argument provided
*@argc: is the argument counter
*@argv: is the argument vector
*Return: always (0)
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
printf("%d\n", argc-1);
return (0);
}
