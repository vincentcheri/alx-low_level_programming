#include <stdio.h>

/**
*main - prints all the arguments supllied to argv
*@argc: this the argument counter
*@argv: this the argument vector
*Return: always (0)
*/

int main(int argc__attribute__((unused)), char *argv[])
{

int i;
for(i=0; argv[i] != '\0'; i++)
{

printf("%s\n", argv[i]);

}
return (0);
}
