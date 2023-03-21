#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
  * followed by a new line
  */
void print_alphabet_x10(void)
{
	int add = 0;
	char alph;

	while (add++ <= 9)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
