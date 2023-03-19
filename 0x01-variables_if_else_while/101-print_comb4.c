#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * with commas and space
 * Return: 0 (success)
 */
int main(void)
{
	int comb, addy, addi;

	for (comb = '0'; comb <= '9'; comb++)
	{
		for (addy = '0'; addy <= '9'; addy++)
		{
			for (addi = '0'; addi <= '9'; addi++)
			{
				if (comb < addy && addy < addi)
				{
					putchar(comb);
					putchar(addy);
					putchar(addi);

					if (comb != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

