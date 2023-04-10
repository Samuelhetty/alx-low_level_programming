#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int pr;

	while (*s)
	{
		for (pr = 0; accept[pr]; pr++)
		{
			if (*s == accept[pr])
			{
				n++;
				break;
			}
			else if (accept[pr + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
