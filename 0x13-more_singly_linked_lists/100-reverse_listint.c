#include "lists.h"

/**
* reverse_listint - a function that reverses a listint_t linked list.
* @head: head of linked list
* Return: a pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = NULL;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		current->next = prev;
		prev = current;
	}
	*head = current;

	return (*head);
}
