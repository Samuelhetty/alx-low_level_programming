#include <stdio.h>

/**
 * main - Prints all combinations of two digit numbers with commas and spaces
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int comb, addy;

	for (comb = '0'; comb <= '9'; comb++)
	{
		for (addy = '0'; addy <= '9'; addy++)
		{
			if (comb < addy)
			{
				putchar(comb);
				putchar(addy);

				if (comb != '8' || (comb == '8' && addy != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
