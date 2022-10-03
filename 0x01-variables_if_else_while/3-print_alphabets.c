#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and in lower case
 * followed by a new line
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
