#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area being filled
 * @b: character to cp
 * @n: number of times to copy
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

