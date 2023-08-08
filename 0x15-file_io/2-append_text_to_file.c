#include <stdio.h>

/**
 * append_text_to_file - Write a function that appends text at the end of
 * a file
 * @filename: file to be treated
 * @text_content: the content of the text
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);
	if (fputs(text_content, file) < 0)
	{
	fclose(file);
	return (-1);
	}
	fclose(file);
	return (1);
}
