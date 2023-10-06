#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: first string.
 * @s2: second string.
 * @n: The max no of bytes
 * Return: A pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1 = 0, len2 = 0, x, y;  
    char *new_string;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;
    if (n >= len2)
        n = len2;
    new_string = malloc(len1 + n + 1);
    if (new_string == NULL)
        return (NULL);
    for (x = 0; x < len1; x++)
        new_string[x] = s1[x];
    for (y = 0; y < n; y++, x++)
        new_string[x] = s2[y];
    new_string[x] = '\0';   /*proper termination*/
    return (new_string);
}
