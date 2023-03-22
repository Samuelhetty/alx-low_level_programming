#include <stdio.h>
/**
  * main - finds and prints the first 98 Fibonacci numbers
  * starting with 1 and 2, followed by a new line
  * Return: 0
  */
int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft = aft + bef;
		bef = aft - bef;
	}

	bef1 = bef / 1000000000;
	bef2 = bef % 1000000000;
	aft1 = aft / 1000000000;
	aft2 = aft % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aft1 + (aft2 / 1000000000));
		pritf("%lu", aft2 % 1000000000);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}

	printf("\n");

	return (0);
}
