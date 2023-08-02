#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: pointer to a pointer to the head of the list
 * @index: argument
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n_node = head;

	while (n_node != NULL)
	{
		if (index == 0)
		{
			return (n_node);
		}
		index--;
		n_node = n_node->next;
	}

	return (NULL);
}
