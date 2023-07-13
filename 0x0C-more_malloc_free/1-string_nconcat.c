#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len = n, matrix;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	for (matrix = 0; s1[matrix]; matrix++)
		len++;

	s = malloc(sizeof(char) * (len + 1));

	if (!s)
		return (NULL);

	len = 0;

	for (matrix = 0; s1[matrix]; matrix++)
		s[len++] = s1[matrix];

	for (matrix = 0; s2[matrix] && matrix < n; matrix++)
		s[len++] = s2[matrix];

	s[len] = '\0';

	return (s);
}
