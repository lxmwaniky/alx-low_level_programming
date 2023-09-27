#include <stdio.h>
#include "main.h"
/**
  *_strlen_recursion - outputs length of a string
  *@s: String being calculated
  *Return: strlen
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
