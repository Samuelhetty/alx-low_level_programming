#include "main.h"

/**
  * print_diagonal -  draws a diagonal line
  * @n: times the char \ should be printed
  */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, h;

		for (i = 0; i < n; i++)
		{
			for (h = 0; h < n; h++)
			{
				if (h == i)
					_putchar('\\');
				else if (h < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

