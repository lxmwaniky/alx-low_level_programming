#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	char hrs, min;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar('\n');
		}
	}
}
