#include "main.h"
/**
 * _isupper - checks if char c is an  uppercase
 * @c: char
 * Return: 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
