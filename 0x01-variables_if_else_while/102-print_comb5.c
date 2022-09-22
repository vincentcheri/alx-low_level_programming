#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++) /*first list of numbers from 1 t0 99*/
	{
		for (j = 0; j < 100; j++)  /*second list of numbers from 1 t0 99*/
		{
			if (i < j)         /*we only want combination where j is greater than i. ij=>*/
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99) /*this line avoids comma from been printed after the last combination*/
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
