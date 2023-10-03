#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string
 * @str: string
 * Return: a pointer
 */

char *_strdup(char *str)
{
	int length, m, n;
	char *cp;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		length++;
	cp = malloc((length + 1) * sizeof(char));
	if (cp == NULL)
		return (NULL);
	for (m = 0; str[m] != '\0'; m++)
		cp[m] = str[m];
	cp[m] = '\0';
	return (cp);
}
