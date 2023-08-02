#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *n_node;
	listint_t *temp = *head;

	n_node = malloc(sizeof(listint_t));
	if (!n_node || !head)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	n_node->next = temp->next;
	temp->next = n_node;
	return (n_node);
}
