#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 * Return: If the function fails or filename is NULL - 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, let, w;
char *text;
text = malloc(letters);
if (text == NULL)
{
return (0);
}
if (filename == NULL)
{
return (0);
}
file = open(filename, O_RDONLY);

if (file == -1)
{
free(text);
return (0);
}

free(buffer);
close(o);

let = read(file, text, letters);
w = write(STDOUT_FILENO, text, let);
close(file);
return (w);
}
