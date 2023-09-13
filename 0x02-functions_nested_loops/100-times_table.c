#include "main.h"

void add_format(int p);
void print_product(int p);

/**
 * print_times_table - prints the 9 times table, starting with 0
 * @n: upper bound number to print up to.
 */
void print_times_table(int n)
{
	int i, j, p;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			p = i * j; /* get product */
			print_product(p);
			if (j == n)
				continue;
			p = i * (j + 1); /* check next product */
			add_format(p);
		}
		_putchar('\n');
	}
}

/**
 * add_format - prints n table
 * @product: product
 */
void add_format(int product)
{
	_putchar(',');
	_putchar(' ');
	if (!(product >= 10))
		_putchar(' ');
	if (!(product >= 100))
		_putchar(' ');
}

/**
 * print_product - helper function to print products
 * @product: product
 */
void print_product(int product)
{
	if (product > 99)
	{
		_putchar((product / 100) + '0');
		_putchar((product / 10 % 10) + '0');
		_putchar((product % 10) + '0');
	}
	else if (product > 9)
	{
		_putchar((product / 10) + '0');
		_putchar((product % 10) + '0');
	}
	else
		_putchar((product % 10) + '0');
}
