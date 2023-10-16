#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length_of_string;
	int j;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[length_of_string] = src[j];
	length_of_string++;
	j++;
	}
	dest[length_of_string] = '\0';
	return (dest);
}
