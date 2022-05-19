#include "lists.h"
/**
* *add_node_end - function adds a new node at the end 
*@head: pointer to head
*@str: string var
*
* Return: new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new_node;
	int i = 0;

	current = *head;
	while (current && current->next != NULL)
	{
		current = current->next;
	}

	while (str[c] != '\0')
	{
		i++;
	}

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = c;
	new_node->next = NULL;

	if (current)
		current->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
