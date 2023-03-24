#include <stdio.h>

/**
  * main - prints the numbers from 1 to 100, followed by a new line
  * fizz for multiple of three, buzz for five and fizzbuzz for both
  *
  * Return: 0
  */

int main(void)
{
	int a = 1, b = 100;

	for (a <= 100)
	{
		if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 3 != 0 && a % 5 != 0)
			printf("%d", a);
		_putchar(a == b ? '\n' : ' ');
		a++;
	}
}
