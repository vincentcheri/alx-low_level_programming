#include <stdio.h>

/**
 * main - checks numbers that are divisible by 5 and 3 separately. and numbers that both 3 and 5 can go in
 * Return: 0
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
