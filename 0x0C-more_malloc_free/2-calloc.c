#include "main.h"
#include <stdio.h>

void _memset(char *s, int c, unsigned int n);
/**
 * _calloc - allocate memory
 * @nmemb: no of elements
 * @size: no of bytes
 * Return: pointer, NULL when unsuccessful
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *point;

	if (nmemb == 0 || size == 0)
		return (NULL);

	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);

	_memset(point, 0, nmemb * size);

	return (point);
}
/**
 * _memset - fill memory
 * @s: string buffer
 * @c: byte
 * @n: no of bytes
 */
void _memset(char *s, int c, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		s[y] = c;
}
