#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *next_node = NULL;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}

	head = NULL;
}
