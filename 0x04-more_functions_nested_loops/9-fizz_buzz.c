#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 1;

while (a <= 100)
{
if (a % 3 == 0 && a % 5 == 0)
printf("FizzBuzz ");
else if (a % 5 == 0)
{
if (a == 100)
{
printf("Buzz");
printf("\n");
}
else
printf("Buzz ");
}
else if (a % 3 == 0)
printf("Fizz ");
else
printf("%d ", a);
a++;
}
return (0);
}
