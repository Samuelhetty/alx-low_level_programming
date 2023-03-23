#include "main.h"

/**
  * print_square - prints a square, followed by a new line.
  * @size: size of the square
  */

void print_square(int size)
{
	int i = 0, t;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (t = 0; t < size; t++)
		{
			while (i < size)
			{
				_putchar('#');
				i++;
			}
			i = 0;
			_putchar('\n');
		}
	}
}
