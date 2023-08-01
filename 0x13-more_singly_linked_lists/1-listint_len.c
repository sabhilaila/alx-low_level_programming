#include "lists.h"

/**
 * listint_len - adds a new node  at the beginnig of a list
 * @h: the pointer to the first node
 * Return: pointer to the new node, or NULL if it fails
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
