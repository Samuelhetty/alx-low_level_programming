#include <stdio.h>

/**
 * main - Prints all combinations of two two-digit numbers
 * with commas and spaces
 * Return: 0 (success)
 */
int main(void)
{
	int comb, combo, addy, addi;

	for (comb = '48'; comb <= '57'; comb++)
	{
		for (combo = '48'; combo <= '57'; combo++)
		{
			for (addy = '48'; addy <= '57'; addy++)
			{
				for (addi = '48'; addi <= '57'; addi++)
				{
					if (((addy + addi) > (comb + combo) && addy >= comb) || comb < addy)
					{
						putchar(comb);
						putchar(combo);
						putchar(' ');
						putchar(addy);
						putchar(addi);

						if (comb + combo + addy + addi == 227 && comb == 57)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
