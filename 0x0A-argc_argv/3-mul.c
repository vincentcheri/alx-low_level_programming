#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two argument two numbers
 * @argc: arguments count
 * @argv: pointer to strings of arguments
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
		return (0);

	}
}
