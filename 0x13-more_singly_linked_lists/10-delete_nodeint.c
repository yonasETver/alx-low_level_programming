#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delete a node at a given positiion.
 * @head: First node address.
 * @index: Position of the node to delete.
 * Return: If success (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	current = *head;
	while (i < index - 1)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
