#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
			putchar(y);
		putchar('\n');
	}
}
