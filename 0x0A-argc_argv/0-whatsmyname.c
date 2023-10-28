#include <stdio.h>

/**
 * main - prints the name of this very file follow by a new line
 * @argc: argument count
 * @argv: pointer to strings of argument
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
