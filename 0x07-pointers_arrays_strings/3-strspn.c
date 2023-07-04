#include "main.h"

/**
 * _strspn - entry point
 *  @s: input
 *  @accept: input
 *
 *  Return: Always 0 (Suceess)
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int i, n;
	unsigned int value = 0;


		for (i = 0; s[i] != '\0'; i++)
		{
			int match = 0;

			for (n = 0; accept[n] != '\0'; n++)
			{
				if (accept[n] == s[i])
				{
					match = 1;
					break;
				}
			}
		if (match == 0)
		break;

	value++;
		}
		return (value);
}
