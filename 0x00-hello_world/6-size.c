#include <stdio.h>
/**
 * main - print out sizes of data types in C
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %c byte(S)\n", sizeof(a));
	printf("size of an int: %i byte(S)\n", sizeof(b));
	printf("size of a long int: %i byte(S)\n", sizeof(c));
	printf("size of a long long int: %i byte(S)\n", sizeof(d));
	printf("size of a float: %f byte(S)\n", sizeof(e));
	return (0);
}
