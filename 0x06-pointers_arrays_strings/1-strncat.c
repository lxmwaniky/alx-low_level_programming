#include "main.h"

/**
 * _strncat - concatenates strings
 * @dest: destination
 * @src: source
 * @n: no. of bytes
 * Return: Pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
