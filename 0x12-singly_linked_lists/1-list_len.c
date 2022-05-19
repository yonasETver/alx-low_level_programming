#include "lists.h"

/**
 * list_len - a function that returns the number of elements in list.
 *@h: const list_t pointer to head of list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
