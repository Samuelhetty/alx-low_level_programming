#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 * @a: input
 * @size: input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2, y;

	i = 0;
	sum1 = 0;
	sum2 = 0;
	y = size - 1;

	while (i <= (size * size))
	{
		sum1 = sum1 + a[y];
		i = i + size + 1;
	}
	while (i < (size * size - 1))
	{
		sum2 += a[y];
		i = i + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
