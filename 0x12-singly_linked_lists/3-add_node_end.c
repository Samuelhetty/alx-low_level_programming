#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added as the new node's content
 *
 * Return: pointer to the new node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *temp_node = *head;
	unsigned int len_str;

	for (len_str = 0; str[len_str]; len_str++)
		;
	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	n_node->len = len_str;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}

	while (temp_node->next != NULL)
		temp_node = temp_node->next;

	temp_node->next = n_node;
	return (n_node);
}
