#include <stdio.h>
/**
  * main - finds and prints the first 98 Fibonacci numbers
  * starting with 1 and 2, followed by a new line
  * Return: 0
  */
int main(void)
{
	unsigned long int i;
	unsigned long int bef = 0;
	unsigned long int bef1 = 1;
	unsigned long int a;

	for (i = 1; i <= 98; i++)
	{
		a = bef + bef1;

		if (i != 98)
		{
			printf(", %lu", a);
		}
		else
		{
			printf("%lu\n", a);
		}
		bef = bef1;
		bef1 = a;
	}
	return (0);
}
