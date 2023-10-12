#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a double linked list
 * @head: pointer to a pointer to the head of the list
 * @n: integer to be added as the new node's content
 *
 * Return: pointer to the new node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node;
	dlistint_t *temp_node = *head;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->prev = NULL;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	while (temp_node->next != NULL)
		temp_node = temp_node->next;

	temp_node->next = n_node;
	n_node->prev = temp_node;
	return (n_node);
}
