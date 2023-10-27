#include "main.h"

/**
 * print_binary - Prints binary equivalent of a decimal number
 * @n:The number to print in binary
 */
void print_binary(unsigned long int n)
{
	int x, track = 0;
	unsigned long int y;

	for (x = 63; x >= 0; x--)
	{
		y = n >> x;

		if (y & 1)
		{
			_putchar('1');
			track++;
		}
		else if (track)
			_putchar('0');
	}
	if (!track)
		_putchar('0');
}
