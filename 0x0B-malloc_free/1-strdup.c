#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new space in mem
 * @str: the string to be duplicated
 * Return: rteurns a pointer to a new string
 */

char *_strdup(char *str)
{
	int i, j, len;
	char *p;

	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			len++;
		}

		p = (char *)malloc(sizeof(char) * (len + 1));

			if (p == 0)
			{
				return (NULL);
			}

			else
			{
				for (j = 0; j < len; j++)
				{
					*(p + j) = *(str + j);
				}
			}
	}

	*(p + j) = '\0';
	return (p);
}
