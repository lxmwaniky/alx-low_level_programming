#include "main.h"
/**
* string_toupper - changes lower to uppercase
* @s: string to convert
* Return: the converted string
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	}
	return (s);
}
