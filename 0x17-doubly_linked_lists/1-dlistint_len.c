#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a double linked list
 * @h: pointer to the dlistint_t list
 *
 * Return: number of elements in h
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes_ptd = 0;

	while (h)
	{
		nodes_ptd++;
		h = h->next;
	}
	return (nodes_ptd);
}
