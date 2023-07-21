#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - entry point
 * @array: input
 * @size: input
 * @action: input
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array !=  NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}


