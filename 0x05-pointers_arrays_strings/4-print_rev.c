#include "main.h"
#include <stdio.h>
/**
  *print_rev - reverses string
  *@s: string being reversed
  */
void print_rev(char *s)
{
	int i;

	for (i = 42; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
