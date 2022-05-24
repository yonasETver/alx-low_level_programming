#include "lists.h"

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: head of linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int num_node = 0;
	long int sub;

	while (head)
	{
		sub = head - head->next;
		num_node++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (sub > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return;
		}
	}

	return (num_node);
}
