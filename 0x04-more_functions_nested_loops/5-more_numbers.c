#include "main.h"
/**
  *more_numbers - Prints 0 - 14 ten times
  */
void more_numbers(void)
{
	int b, c;

	for (b = 0; b < 10; b++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c >= 10)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
