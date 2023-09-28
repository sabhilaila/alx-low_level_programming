#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the number to be converted
 * Return: 0 for success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
	if (b[i] != '0' && b[i] != '1')
	{
		return (0);
	}
	else if (b[i] == '1')
	{
		result |= (1 << i);

	}
	i++;
	}
	return (result);
}
