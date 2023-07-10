#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *outCOME;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	outCOME = malloc(sizeof(char) * (len1 + len2 + 1));

	if (outCOME == NULL)
		return (NULL);
	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		outCOME[len1] = s1[len1];
		len1++;
	}

	while (s2[len2] != '\0')
	{
		outCOME[len1] = s2[len2];
		len1++, len2++;
	}
	outCOME[len1] = '\0';
	return (outCOME);
}
