#include "main.h"
/**
* _strcmp - compares 2 strings
* @s1: first
* @s2: second
* Return: < 0 if s1 < s2, 0 if =
* > 0 if s1 is > s2
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
		return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
