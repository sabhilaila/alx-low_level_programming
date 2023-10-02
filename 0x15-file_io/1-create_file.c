#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * create_file - entry point
 * @filename: input
 * @text_content: input
 * Return: 0 for success
 */
int create_file(const char *filename, char *text_content)
{
	int file;

if (filename == NULL)
{
return (-1);
}
file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (file == -1)
{
return (-1);
}
if (text_content != NULL)
{
ssize_t written = write(file, text_content, strlen(text_content));
if (written == -1)
{
close(file);
return (-1);
}
}
close(file);
return (1);
}

