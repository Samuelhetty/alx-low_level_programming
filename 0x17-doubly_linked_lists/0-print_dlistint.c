#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a double linked list
 * @h: pointer to the dlistint_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes_ptd = 0;

	for (; h; nodes_ptd++, h = h->next)
	{
		printf("%d\n", h->n);
	}
	return (nodes_ptd);
}
