#include "main.h"
/**
  *_isupper - returns 1 if char c is uppercase
  *@c: char being checked
  *Return: 1 if c is uppercase, otherwise 0
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
