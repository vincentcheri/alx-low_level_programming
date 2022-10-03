#include <stdio.h>
/**
*main - prints all the arguments supllied to argv
*@argc: this the argument counter
*@argv: this the argument vector
*Return: always (0)
*/

int main(int argc, char *argv[])
{

int i;
for(i=0; argv[i] != '\0'; i++)
{

printf("argv[%d] = %s\n", i,argv[i]);

}
return (0);
}
