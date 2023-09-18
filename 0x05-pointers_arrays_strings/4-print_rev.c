#include "main.h"
#include <stdio.h>
/**
  *print_rev - reverses string
  *@s: string being reversed
  */
void print_rev(char *s)
{
    int length = 0;

    while (s[x] != '\0')
    {
        x++;
    }
    for (int i = x - 1; i >= 0; i--)
    {
        putchar(s[i]);
    }
    putchar('\n');
}
