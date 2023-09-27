#include "main.h"

/**
 * _pow_recursion - value of x^y
 * @x: ^value
 * @y: pow
 * Return: result of the pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
