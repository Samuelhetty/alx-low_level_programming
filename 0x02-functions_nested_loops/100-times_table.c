#include "main.h"

/**
  * print_times_table - prints time tables 1-14
  * @n: integar n
  * Return: 0
  */
void print_times_table(int n)
{
	int a = 0, cont, b;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			cont = a * b;
			if (b == 0)
				_putchar('0' + cont);
			else if (cont < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + cont);
			}
			else if (cont < 100)
			{
				_putchar(' ');
				_putchar('0' + cont / 10);
				_putchar('0' + cont % 10);
			}
			else
			{
				_putchar('0' + cont / 100);
				_putchar('0' + (cont - 100) / 10);
				_putchar('0' + cont % 10);
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
