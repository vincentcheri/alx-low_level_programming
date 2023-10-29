#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument counts
 * @argv: a pointer variable array that points to strings of arguments
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int i, sum, num;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}

	else
	{
		while (argc-- && argc > 0)
		{
			for (i = 0; argv[argc][i] != '\0'; i++)
			{
				if (!(isdigit(argv[argc][i])))
				{
					printf("Error\n");
					return (1);
				}
			}

			num = atoi(argv[argc]);
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);

}
