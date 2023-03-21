#include "main.h"

/**
  * print_alphabet - Write a function that prints the alphabet, in lowercase,
  * followed by a new line.
  */
void print_alphabet(void)

{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
