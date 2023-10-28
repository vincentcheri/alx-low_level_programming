#include <stdio.h>


/**
 * main - prints thenumber of arguments passsed into it
 * @argc: argument count
 * @argv: a pointer to strings of argument
 * Return: Always zero (0)
 */


int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
