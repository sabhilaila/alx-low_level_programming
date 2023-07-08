#include "main.h"
/**
 * _isalpha - checks for alphabetics
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 for else
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
