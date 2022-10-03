#include <stdio.h>

/**
* main - Prints the name of the programme file
* @argc: This is the argument counter
* @argv: This is the argument vector
* Return: Always 0 (Success).
*/

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
