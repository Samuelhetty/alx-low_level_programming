#include "main.h"

/**
  * print_most_numbers - prints the numbers, from 0 to 9,
  * except 2 and 4, followed by a new line
  *
  * Return: 0
  */

void print_most_numbers(void)
{
	int num;

	while (num != 2 && num != 4)
	{
		if (num >= 48; num < 58)
		{
			_putchar(num);
		}
		num++;
	}
	_putchar('\n');
	return (0);
}
