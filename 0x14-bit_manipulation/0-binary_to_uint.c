#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: binary string
 *
 * Return: unsigned int representation of binary string
 * or 0 if invalid input
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = (dec_val << 1) | (b[i] - '0');
	}

	return (dec_val);
}
