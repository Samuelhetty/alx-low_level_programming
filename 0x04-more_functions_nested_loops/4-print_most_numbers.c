#include "main.h"

/**
  * print_most_numbers - prints the numbers, from 0 to 9,
  * except 2 and 4, followed by a new line
  *
  * Return: void
  */

void print_most_numbers(void)
{
	int c = 0, b = 9;

	while (c <= b)
	{
		if (c != 2 && c != 4)
			_putchar(c + '0');
			c++;
	}
	_putchar('\n');
}
