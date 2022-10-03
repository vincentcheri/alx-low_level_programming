#include "main.h"
#include <string.h>

/**
* _strlen - returns the length of a string
* @s: string to evaluate
*
* Return: the length of the string
*/

int _strlen(char *s)
{
int i;

i = 0;    /*iteration will start from the first element*/

while (s[i] != '\0') /*iterates every other array element starting from index number 0 with the exception of \0. because that is the array terminator*/
{
	i++;
}

return (i);
}

/*--------------------------this works toooo--------------------*/

int _strlen(char *s)
{
    return(strlen(s));
}
