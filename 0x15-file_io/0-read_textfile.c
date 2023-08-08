#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * read_textfile -  reads a text file and prints
 * @filename: the file to be read
 * @letters: number of letters to be printed and read
 * Return: letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ch;
	FILE *file;

	size_t count = 0;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);
	while (((ch = fgetc(file)) != EOF) && (count < letters))
	{
		putchar(ch);
		count++;
	}
	fclose(file);
	return (count);
}
