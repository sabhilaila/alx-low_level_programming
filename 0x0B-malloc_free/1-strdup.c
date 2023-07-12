#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate a string
 * @str: the string to duplicate
 * Return: the string duplicated
 */
char *_strdup(char *str)
{
	int i = 0;
	int a;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
		s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
	{
	return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		s[a] = str[a];

	}

	return (s);
}
