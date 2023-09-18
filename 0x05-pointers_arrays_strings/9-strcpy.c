#include "main.h"
/**
 * *_strcpy - copies the string pointed
 * @dest: pointer to buffer
 * @src: string being copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x, i;

	x = 0;
	while (src[x] != '\0')
	{
		x++;
	}
	for (i = 0; i < x; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
