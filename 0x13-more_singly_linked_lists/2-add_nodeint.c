#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to a pointer to the head of the list
 * @n: arguments
 *
 * Return: pointer to the head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
