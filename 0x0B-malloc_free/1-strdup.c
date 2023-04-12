#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *copy;
	int len1 = 0;
	int len2 = 0;

	/*calculate string length*/
	if (str == NULL)
		return (NULL);

	while (str[len1] != '\0')
	{
		len1++;
	}

	/* allocate memory for the copy of the string*/
	copy = malloc(sizeof(char) * (len1 + 1));

	/*returns NULL if memory allocation fails*/
	if (copy == NULL)
		return (NULL);

	/*duplicate string and returns pointer to the duplicated string*/
	for (len2 = 0; str[len2]; len2++)
	{
		copy[len2] = str[len2];
	}
	return (copy);
}
