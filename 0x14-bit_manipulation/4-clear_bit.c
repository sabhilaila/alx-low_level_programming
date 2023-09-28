#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: input
 * @n: input
 * Return: 0 for success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n = *n & ~(1UL << index);
return (1);
}
