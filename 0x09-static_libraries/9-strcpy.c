#include "main.h"
/**
 * char *_strcpy - entry point
 * @dest: copy to
 * @src: string
 * Return: pointer to the destination string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (src[l] != '\0')
	{
		l++;

	}
	for (; x < l; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}