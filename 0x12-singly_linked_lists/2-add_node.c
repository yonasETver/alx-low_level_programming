#include "lists.h"
/**
 * *add_node - a function that adds a new node at the beginning
 * @head: linked list head
 * @str: the data part
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	char *nstr = strdup(str);
	list_t *newhead = NULL;
	int i = 0;

	if (!nstr)
		return (NULL);
	while (nstr[i] != '\0')
	{
		i++;
	}
	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
	{
		free(nstr);
		return (NULL);
	}
	newhead->str = nstr;
	newhead->len = i;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
