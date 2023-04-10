#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		int t;

		for (t = 0; accept[t]; t++)
		{
		if (*s == accept[t])
		return (s);
		}
	s++;
	}
	return ('\0');
}
