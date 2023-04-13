#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	/*terminates with a status value of 98 if fails*/
	if (!p)
	{
		exit(98);
	}
	/*returns a pointer to the allocated memory*/
	return (p);
}
