#include "main.h"

/**
 * reverse_array - reverses the content of an aray of integers
 * @a: the array of integers to be reversed
 * @n: the number of elements in the array
 * Return: void
 */

int reverse_array(int *a, int n)

{

	int tmp, index;

	for (index = n - 1, index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}
}
