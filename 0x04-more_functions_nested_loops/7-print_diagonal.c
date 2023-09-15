#include "main.h"
/**
  *print_diagonal - Prints \ diagonally
  *@n: no. of printing times
  */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (x = 0; x < n; x++)
	{
		for (y = 0; y <= x; y++)
		{
			if (y != x)
				_putchar(' ');
			else
				_putchar('\\');
		}
		_putchar('\n');
	}
}
