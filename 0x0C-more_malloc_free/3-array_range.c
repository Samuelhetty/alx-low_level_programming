#include <stdlib.h>
#include "main.h"

/**
  * array_range -  creates an array of integers that contains all
  * the values from min (included) to max (included), ordered from min to max
  * @min: integar values
  * @max: integar values
  *
  * Return: the pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int *array, i = 0;

	if (min > max)
		return (NULL);

	array = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (array == NULL)
		return (NULL);

	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}

	return (array);
}
