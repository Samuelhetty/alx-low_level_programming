#include "main.h"

/**
  * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
  *
  * Return: 0
  */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
