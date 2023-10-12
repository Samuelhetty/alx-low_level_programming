#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in a linked list
 * at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node;
	dlistint_t *next_node;
	dlistint_t *prev_node = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	for (; i < index - 1 && prev_node != NULL; i++)
	{
		prev_node = prev_node->next;
	}

	if (prev_node == NULL || prev_node->next == NULL)
	{
		return (-1);
	}

	del_node = prev_node->next;
	prev_node->next = del_node->next;
	free(del_node);
	return (1);
}
