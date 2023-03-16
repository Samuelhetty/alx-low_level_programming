#include <stdio.h>
/**
 * main - print out sizes of data types in C
 *
 * Return: 0
 */
int main(void)
{
	printf("size of a char: %c byte(S)\n", sizeof(char));

	printf("size of an int: %i byte(S)\n", sizeof(int));

	printf("size of a long int: %i byte(S)\n", sizeof(long int));

	printf("size of a long long int: %i byte(S)\n", sizeof(long long int));

	printf("size of a float: %f byte(S)\n", sizeof(float));
	return (0);
}
