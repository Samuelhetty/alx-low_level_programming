#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: pointer to the memory previously allocated
  * @old_size: the size, in bytes, of the allocated space for ptr
  * @new_size: the new size, in bytes of the new memory block
  *
  * Return: 0
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *NEWp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
	{
		NEWp = malloc(new_size);

		if (!NEWp)
			return (NULL);

		return (NEWp);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	NEWp = malloc(new_size);

	if (!NEWp)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		NEWp[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (NEWp);
}
