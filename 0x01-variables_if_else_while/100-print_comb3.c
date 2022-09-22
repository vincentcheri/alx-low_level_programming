#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
int n, m;

for (n = 48; n <= 56; n++) /* gets number from 0 to 8. 48 to 56 is the ascii number for 1 to 8*/
{
for (m = 49; m <= 57; m++) /* gets number from 1 to 9. 49 to 57 is the ascii number for 1 to 9.*/
{
if (m > n)         /* where the combinations are the same do not print it out. only print where m is greater that n. so no 11 22 33 etc*/
{
putchar(n);    /* the first loop check if n is trully less than 8 starting from 0 and combine 0 with 1-9 of the second loop and keep updating to 1...8.*/				                *
putchar(m);
if (n != 56 || m != 57)
{
putchar(',');  /* for each combination printed put a "," */
putchar(' '); /* after a combination and "," are printed print space */
}
}
}
}
putchar('\n');
return (0);
}
