#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	unsigned int mul;
	int num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (98);
	}
	for (num1 = 1; num1 < argc; num1++)
	{
		for num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if argv[num1][num2] < 48 argv[num1][num2] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
		mul = atoi(argv[num1]) * atoi(argv[num2]);
		printf("%lu\n", mul);
	}
	return (0);
}
