#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elemnts of the signle linked list
 * @h: pointer
 * Return: the number o nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (ni1)\n");
		else
			 printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
