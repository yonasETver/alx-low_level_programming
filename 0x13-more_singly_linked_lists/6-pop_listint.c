#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint
 * @head: head of linked list
 * Return: head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int hd;

	if (head == NULL)
	{
		return (0);
	}

	current = *head;
	if (current == NULL)
	{
		return (0);
	}

	hd = current->n;
	*head = current->next;
	free(current);
	return (hd);
}
