#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: Thead of the list
 * @n: data part
 *
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new_node;

	current = *head;
	while (current && current->next != NULL)
	{
		current = current->next;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (current)
		current->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
