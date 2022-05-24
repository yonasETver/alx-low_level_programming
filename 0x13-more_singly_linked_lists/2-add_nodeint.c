#include "lists.h"

/**
 * *add_nodeint - a function that adds a new node at the beginning 
 * @head: linked list head
 * @n: int data part of the list
 * Return: number of elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}