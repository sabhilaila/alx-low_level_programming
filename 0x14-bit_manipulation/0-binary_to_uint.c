#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the number to be converted
 * Return: 0 for success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i = 0;

	while (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
	if (b[i] != '0' && b[i] != '1')
	{
		return (0);
	}
		result |= (b[i] - '0') << i;
		i++;

	}
	return (0);
}
