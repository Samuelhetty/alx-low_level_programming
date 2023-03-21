#include <stdio.h>

/**
  * main - prints the first 50 Fibonacci numbers
  *
  * Return: 0
  */
int main(void)
{
	int x = 0;
	long int a = 0, b = 1, next;

	while (x < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (x < 49)
		{
			printf(", ");
		}
		x++;
	}
	putchar('\n');
	return (0);
}
