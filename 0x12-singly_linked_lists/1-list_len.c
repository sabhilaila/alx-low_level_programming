#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the numbers of elements in a linked list
 * @h: pointer to the list_t
 * Return: the numbers of elemnts
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);

}
