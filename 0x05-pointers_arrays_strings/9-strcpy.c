#include "main.h"

/**
*_strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int len, i;

len = 0;

while (src[len] != '\0')         /*this while loop gets the lenght of the src*/
{
len++;
}                                 /*this while loop stops here*/

	for (i = 0; i < len; i++)  /*this for loop conditioned the length of src from 0 to 'len' which is the index of the last char before the terminating null byte.*/
	{
	dest[i] = src[i];         /*this line asigns elements from src for each of the index of dest[98] stopping where i < len*/
}                                 /*loop ends/
dest[i] = '\0';

return (dest);
}
