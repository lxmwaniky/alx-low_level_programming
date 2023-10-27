#include "main.h"

/**
 * set_bit - This code sets a bit at a given index to 1
 * @n: This is a pointer to the number to change
 * @index: The index of the bit to set to 1
 *
 * Return: 1 as success, -1 as failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
