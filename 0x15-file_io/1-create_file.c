#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - Create a function that creates a file
 * @text_content: te content of the file
 * @bytes_written - the bytes of the written text
 * @filename: the file to be treated
 * Return: 1 for succes and -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	size_t bytes_written = 0;
	size_t text_len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	while (text_content[text_len] != '\0')
		text_len++;
	bytes_written = write(fd, text_content, text_len);
	if (bytes_written != text_len)
	{
		close(fd);
			return (-1);
	}
	close(fd);
	return (1);
}
