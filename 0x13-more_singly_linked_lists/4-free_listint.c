#include "lists.h"

/**
 * free_listint - a function that frees a listint_t
 * @head: head of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
