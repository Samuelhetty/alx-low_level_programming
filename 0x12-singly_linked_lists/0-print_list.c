#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @inv: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *inv)
{
	size_t nodes_ptd = 0;

	for (; inv != NULL; inv = inv->next)
	{
		if (inv->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", inv->len, inv->str);
		nodes_ptd++;
	}
	return (nodes_ptd);
}
