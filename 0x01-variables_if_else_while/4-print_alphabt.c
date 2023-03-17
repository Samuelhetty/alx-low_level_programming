#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print the alphabet in lowercase except q and e, followed by a new line
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
