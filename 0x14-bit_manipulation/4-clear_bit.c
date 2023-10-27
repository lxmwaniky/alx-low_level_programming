#include "main.h"

/**
 * clear_bit - This sets the value of a given bit to 0
 * @n: This is the pointer to the number to change
 * @index: The index of the bit to clear
 *
 * Return: 1 as success, -1 as failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
