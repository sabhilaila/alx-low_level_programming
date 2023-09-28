#include "main.h"

/**
 * flip_bits - returns the bits to flip to get from number to other
 * @n: input
 * @m: input
 * Return: 0 for success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;

while (xor_result > 0)
{
count += xor_result & 1;
xor_result >>= 1;
}

return (count);
}
