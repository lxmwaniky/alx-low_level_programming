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
	int n;

	while (1)
	{
		n = *s++;
		if (n == c)
		{
			return (s - 1);
		}
		if (n == 0)
		{
			return (NULL);
		}
	}
}
