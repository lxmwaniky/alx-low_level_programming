#include "main.h"
#include <stdio.h>
/**
  *swap_int - Swaps values of a and b
  *@a: Pointer a
  *@b: Pointer b
  */
void swap_int(int *a, int *b)
{
	int store = *a;
	*a = *b;
	*b = store;
}
