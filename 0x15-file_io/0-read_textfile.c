#include <stdio.h>
#include "main.h"

/**
 * read_textfile - entry point
 * @letters: input
 * @filename: input
 * Return: 0 for success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file;
char buffer[1024];
size_t total_read = 0;
size_t read_size;

if (filename == NULL)
{
return (0);
}
file = fopen(filename, "r");
if (file == NULL)
{
return (0);
}
while (total_read < letters &&
(read_size = fread(buffer, 1, sizeof(buffer), file)) > 0)
{
size_t write_size = (letters - total_read < read_size) ?
(letters - total_read) : read_size;
size_t written = fwrite(buffer, 1, write_size, stdout);

if (written != write_size)
{
fclose(file);
return (0);
}
total_read += written;
}
fclose(file);
return (total_read);
}
