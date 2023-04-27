#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	const char *sentences[] = {
		"You're beat! and yet, you must allow,\n",
		"I bore my house upon my back!\n"
	};

	size_t num_sentences = sizeof(sentences) / sizeof(sentences[0]);
	size_t i = 0;

	while (i < num_sentences)
	{
		printf("%s", sentences[i]);
		i++;
	}
}
