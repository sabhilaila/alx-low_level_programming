#include "main.h"
#include <unistd.h>

/**
 * binary_to_uint - convert a number to an unsigned int
 * @b: the string containing the binary number
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		return (0);
	dec_val = 2 * dec_val + (b[i] - '0');
	}
		return (dec_val);
}
