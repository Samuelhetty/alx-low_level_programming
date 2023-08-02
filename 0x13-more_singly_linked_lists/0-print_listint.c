#include <stdio.h>
#include "lists.h"

/**
  * print_listint - prints all the elements of a listint_t list.
  * @h: pointer to the listint_t list to print
  * Return: the number of nodes printed
  */
size_t print_listint(const listint_t *h)
{
	size_t tally = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		tally++;
	}

	return (tally);
}
