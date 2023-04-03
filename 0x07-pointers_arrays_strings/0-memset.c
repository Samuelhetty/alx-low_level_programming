#include "main.h"
/**
 * _memset - fills the first 'n' bytes of the memory area
 * pointed to by 's' with the constant byte 'b'
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > i)
	{
		i++;
		*(s + 1) = b;
	}
	return (s);
}
