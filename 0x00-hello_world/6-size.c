#include <stdio.h>
/**
 * main - print out sizes of data types in C
 *
 * Return: 0
 */
int main(void)
{
	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(char));
	printf("size of an int: %lu byte(S)\n", (unsigned long)sizeof(int));
	printf("size of a long int: %lu byte(S)\n", (unsigned long)sizeof(long int));
	printf("size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(long long int));
	printf("size of a float: %lu byte(S)\n", (unsigned long)sizeof(float));
	return (0);
}
