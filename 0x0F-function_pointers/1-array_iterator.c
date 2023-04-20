#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: array 
 * @size: size of array
 * @action: pointer to the function you need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		
		while (i < size)
		{
			action(array[i]);
			i++;
		}

	}
}
