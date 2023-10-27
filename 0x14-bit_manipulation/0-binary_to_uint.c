#include "main.h"

/**
 * binary_to_uint -This converts a binary number to unsigned int
 * @b:This is the string containing the binary number
 *
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		decimal = 2 * decimal + (b[x] - '0');
	}

	return (decimal);
}
