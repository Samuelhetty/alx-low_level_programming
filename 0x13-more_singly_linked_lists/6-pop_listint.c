#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint -  deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to the head of the list
 *
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int old_node;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}


	temp = (*head)->next;
	old_node = (*head)->n;
	free(*head);
	*head = temp;

	return (old_node);
}
