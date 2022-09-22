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
if (i < j)         /*we only want combinations where j is greater than i.*/
{
putchar((i / 10) + 48); /*divides each number in the list of the first loop starting from "0" and adds 48(ascii value for "0") to the result*/
putchar((i % 10) + 48); /*modulus of each number in the list of the first loop starting from "0" and adds 48(ascii value for "0") to the result*/
putchar(' ');
putchar((j / 10) + 48); /*divides each number in the list of the second loop starting from "0" and adds 48(ascii value for "0") to the result*/
putchar((j % 10) + 48); /*modulus of each number in the list of the second loop starting from "0" and adds 48(ascii value for "0") to the result*/
if (i != 98 || j != 99) /*this line avoids comma from been printed after the last combination. you can use i<98 || j<99. ab cd, ef gh and ! ab cd, ef gh,*/
{
putchar(',');
putchar(' ');
}

}
}
putchar('\n');
return (0);
}
