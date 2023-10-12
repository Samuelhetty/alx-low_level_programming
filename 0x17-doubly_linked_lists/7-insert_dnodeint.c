#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @h: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *n_node;
	dlistint_t *temp = *h;

	n_node = malloc(sizeof(dlistint_t));
	if (!n_node || !h)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (idx == 0)
	{
		n_node->next = *h;
		*h = n_node;
		return (n_node);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			n_node->next = temp->next;
			temp->next = n_node;

			return (n_node);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
