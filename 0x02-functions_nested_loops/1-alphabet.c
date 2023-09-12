#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 */

void print_alphabet(void);

/**
  * main - calls print_alphabet function
  *Return: 0
  */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar('\n');
	}
}
