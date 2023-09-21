#include <stdio.h>
#include "main.h"
/**
* _strncpy - copies string
* @dest: destination
* @src: source
* @n: number of bytes to copy
* Return: pointer to string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
