#include "main.h"

/**
 * flip_bits - Tis code  counts the number of bits to change
 * to get from one number to another
 * @n:This is the first number
 * @m: This is the second number
 *
 * Return: The number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		current = exclusive >> j;
		if (current & 1)
			count++;
	}

	return (count);
}
