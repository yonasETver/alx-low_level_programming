#include "lists.h"

/**
 * print_list - prints to standard output
 * @h: A node in list_t
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *tmp = h;

	for (i = 0; tmp; i++)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", tmp->len, tmp->str);
		}
		tmp = tmp->next;
	}
	return (i);
}
