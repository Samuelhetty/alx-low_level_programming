#include <stdio.h>

/**
 * main - print the alphabet in lowercase and then in uppercase,
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
        char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

        for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
        putchar('\n');
        return (0);
}
