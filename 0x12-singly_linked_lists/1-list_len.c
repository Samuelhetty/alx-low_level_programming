#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @inv: pointer to the list_t list
 *
 * Return: number of elements in inv
 */
size_t list_len(const list_t *inv)
{
	size_t nodes_ptd = 0;

	while (inv)
	{
		nodes_ptd++;
		inv = inv->next;
	}
	return (nodes_ptd);
}
