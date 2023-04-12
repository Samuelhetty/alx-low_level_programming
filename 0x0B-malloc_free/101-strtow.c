#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int word_count, strLEN, w;

	word_count = 0;
	w = 0;

	for (c = 0; s[strLEN] != '\0'; strLEN++)
	{
		if (s[strLEN] == ' ')
			word_count = 0;
		else if (word_count == 0)
		{
			word_count = 1;
			w++;
		}
	}

	return (w);
}
