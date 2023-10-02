#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <string.h>
/**
 * append_text_to_file - entry point
 * @filename: input
 * @text_content: input
 * Return: 0 for success
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file;
ssize_t written;

if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
return (1);
}
file = open(filename, O_WRONLY | O_APPEND);
if (file == -1)
{
return (-1);
}
written = write(file, text_content, strlen(text_content));
if (written == -1)
{
close(file);
return (-1);
}
close(file);
return (1);
}
