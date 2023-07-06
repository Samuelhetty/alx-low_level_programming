#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

_putchar


include "main.h"
#include <unistd.h>
/**
  * _putchar - writes the character c to stdout
  * @c: the char to print
  *
  * Return: on success 1
  * on error, -1 is returned, and error is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, & c, 1));
}
