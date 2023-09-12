#include "main.h"

/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hrs, mins;

	hrs = 0;

	while (hrs < 24)
	{
		mins = 0;
		while (mins < 60)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
			mins++;
		}
		hrs++;
	}
}
