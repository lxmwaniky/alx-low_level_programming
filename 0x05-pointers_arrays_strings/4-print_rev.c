#include "main.h"
#include <stdio.h>
/**
  *print_rev - reverses string
  *@s: string being reversed
  */
void print_rev(char *s)
{
	int x = 0, i;

	while (s[x] != '\0')
	{
		x++;
	}
	for (i = x - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
