#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: the separator between numbers
 * @n: number of integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	i = n;

	while (i--)
	{
		printf("%d%s", va_arg(numbers, int),
				(separator && i) ? separator : "");
	}
	putchar('\n');
	va_end(numbers);
}
