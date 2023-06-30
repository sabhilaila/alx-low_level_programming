#include "main.h"
#include <stdio.h>

/**
 * _strcat - concentrates two strings
 * @dest: the destination of string
 * @scr: the source string
 * Return: a pointer to the resulting dest test
 */

char *_strcat(char *dest, char *src)

{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
