#include "main.h"
/**
  *print_most_numbers - Prints 0 - 9. Skips 2 and 4
  */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
