#include <stdio.h>
#inlcude <stdlib.h>

/**
 * main - print the alphabet in lowercase except q and e, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
