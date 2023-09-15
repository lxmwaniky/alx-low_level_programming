#include "main.h"
/**
  *print_numbers - Prints from 0 - 9
  *Return: 0
  */
void print_numbers(void)
{
	int c;
	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
