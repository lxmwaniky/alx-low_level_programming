#include "main.h"

/**
 * print_last_digit - prints the digit's last number
 * @n: number
 * Return: absolute value of last digts
 */
int print_last_digit(int n)
{
	int i = n % 10;

	i = (i < 0) ? -i : i;
	_putchar(i + '0');
	return (i);
}
