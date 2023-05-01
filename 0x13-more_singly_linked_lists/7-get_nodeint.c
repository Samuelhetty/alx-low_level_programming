#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to a pointer to the head of the list
 * @n: 
 *
 * Return: pointer to the new node added
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n_node = head;

	while (n_node != NULL;)
	{
		if (index == 0)
		{
			return (n_node);
		}
		index++;
		n_node = n_node->next;
	}

	return NULL;
}
