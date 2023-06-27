#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @: the number to be checked
 * Return: 1 for a charchter that will be digit and 0 for any else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}	
		return (0);
}
