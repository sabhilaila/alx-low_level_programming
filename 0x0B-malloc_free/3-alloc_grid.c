#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - entry point
 * @width: input
 * @height: input
 * Return: pointer to 2 array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
	return ( NULL);

		a = malloc(sizeof(int *) * height);
	if (a == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
	if (a[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
		free(a[j]);
	}
		free(a);
	return (NULL);
	}
	}

	return (a);
}
