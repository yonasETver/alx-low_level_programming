#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int num_elems = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		num_elems++;
	}
	return (num_elems);
}
