#include "main.h"

/**
 * print_triangle - prints mario-type triangles
 *
 * @size: height of triangle
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (x = 1; x <= size; x++)
	{
		for (z = size - x; z != 0; z--)
			_putchar(' ');
		for (y = 1; y <= x; y++)
			_putchar('#');
		_putchar('\n');
	}
}

