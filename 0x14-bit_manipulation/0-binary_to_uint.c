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

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
	if (*b != '0' && *b != '1')
	{
		return (0);
	}
	result = (result << 1) + (*b - '0');
	b++;
	}
	return (result);
}
