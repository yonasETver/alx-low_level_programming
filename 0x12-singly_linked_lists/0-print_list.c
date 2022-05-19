#include "lists.h"

/**
 * print_list - a function that prints all the elements
 *@h: pointer to head of list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	for (;h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
