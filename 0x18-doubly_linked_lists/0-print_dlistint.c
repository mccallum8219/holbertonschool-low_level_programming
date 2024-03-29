#include "lists.h"

/**
 * print_dlistint - prints all elements in dlistint_t
 * @h: head of list
 * Return: number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
