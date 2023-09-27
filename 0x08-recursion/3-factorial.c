#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: number from which factorial is returned
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
