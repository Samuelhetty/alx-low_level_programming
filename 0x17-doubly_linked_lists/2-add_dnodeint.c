#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a double linked list
 * @head: pointer to a pointer to the head of the list
 * @n: integer to be added as the new node's content
 *
 * Return: pointer to the head of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n_node;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = (*head);
	(*head) = n_node;

	return (*head);
}
