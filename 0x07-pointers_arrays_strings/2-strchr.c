#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a char in a str
 * @s: str to check
 * @c: char to locate
 * Return: a pointer to first occurrence of the character c in the string s, 
 *NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
