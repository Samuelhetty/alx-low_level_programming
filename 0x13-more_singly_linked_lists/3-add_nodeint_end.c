#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to a pointer to the head of the list
 * @n: arguments
 *
 * Return: pointer to the new node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));
	listint_t *e_node = *head;

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	while (e_node->next != NULL)
	{
		e_node = e_node->next;
	}

	e_node->next = n_node;

	return (n_node);
}
