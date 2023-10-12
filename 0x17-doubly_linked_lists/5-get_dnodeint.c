#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * @head: pointer to a pointer to the head of the list
 * @index: argument
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *n_node = head;

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
