#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Joins 2 str
 * @s1: 1st str
 * @s2: 2nd str
 * Return: pointer to str
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, x, y, z = 0, len1 = 0, len2 = 0, len;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		len1++;
	for (b = 0; s2[b] != '\0'; b++)
		len2++;
	len = len1 + len2;

	concat = malloc((len + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (x = 0; x < len1; x++)
		concat[x] = s1[x];
	for (y = len1; y < len; y++)
	{
		concat[y] = s2[z];
		z++;
	}
	concat[y] = '\0';
	return (concat);
}
