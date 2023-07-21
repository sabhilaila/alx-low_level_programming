#include "function_pointers.h"
/**
 * int_index - entru point
 * @array: input
 * @size: input
 * @cmp: input
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
			}
		}
	}
	return (-1);
}
