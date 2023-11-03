#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate len of string
 * @s: string to be passed
 * Return: an integer which is len of s
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

return (i);

}


/**
*_strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
* Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);

}



/**
 * argstostr - concatenates all the arguments of your program
 * @ac: this is parameter for argument number or count
 * @av: this a parameter for double pointer
 * Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	char *mem_chunk;
	int empty_mem_track, i, j, over_all_len;

	empty_mem_track = 0;
	over_all_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		over_all_len += _strlen(av[i]) + 1;

	mem_chunk = (char *)malloc(sizeof(char) * over_all_len);

	if (mem_chunk == NULL)
		return (NULL);

	 empty_mem_track = 0;

	for (j = 0; j < ac; j++)
	{
		_strcpy(mem_chunk + empty_mem_track, av[j]);
		empty_mem_track += _strlen(av[j]);
		mem_chunk[empty_mem_track] = '\n';
		empty_mem_track++;

	}

	return (mem_chunk);
}

