#include "main.h"

/**
  * more_numbers - prints 10 times the numbers, from 0 to 14,
  * followed by a new line
  *
  * Return: 0
  */

void more_numbers(void)
{
	int i;
	int count = 0;

	while (count++ <= 14)
	{
		for (i = 1; i <= 10; i++)
		{
			_putchar(i);
		}
		_putchar(count % 10 + '0');
		_putchar('\n');
	}
}
