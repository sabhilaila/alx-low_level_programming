#include "main.h"

/**
 *  _islower - Checks lowercase character
 *  @c: the charactersto be checked
 *  Return: 1 for lowercase character or 0 for the rest
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{

	return (1);
	}
	else 
	return (0);
}
