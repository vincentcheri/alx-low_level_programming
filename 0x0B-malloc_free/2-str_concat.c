#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to be concatenated on
 * @s2: string to concatenate with
 * Return: a pointer.NULL if str1 or str2 is empty.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k = 0, len1 = 0, len2 = 0, len;
	char *p;

	if (s1 == 0)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	if (s2 == 0)
		s2 = "";

	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	len = len1 + len2;

	p = (char *)malloc(sizeof(char) * len + 1);

	if (p == NULL)
		return (NULL);

	for (k = 0; k < len1; k++)
		*(p + k) = *(s1 + k);

	for (j = 0; j < len2; j++)
		*(p + k++) = *(s2 + j);

	p[k] = '\0';

	return (p);
}

