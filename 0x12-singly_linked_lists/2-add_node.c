#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added as the new node's content
 *
 * Return: pointer to the head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	unsigned int len = 0;

	while (str[len])
		len++;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	n_node->len = len;
	n_node->next = (*head);
	(*head) = n_node;

	return (*head);
}
