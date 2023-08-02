#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node = NULL;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}

	head = NULL;
}
