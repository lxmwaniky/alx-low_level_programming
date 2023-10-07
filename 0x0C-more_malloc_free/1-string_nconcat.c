#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1, len2, x, y;
    char *result;

    if (s1 == NULL)
        s1 = "";

    for (len1 = 0; s1[len1]; len1++);
    for (len2 = 0; s2[len2]; len2++);

    if (n >= len2)
        n = len2;
    result = malloc(len1 + n + 1);

    if (result == NULL)
        return NULL;

    for (x = 0; x < len1; x++)
        result[x] = s1[x];

    for (y = 0; y < n; y++)
        result[x + y] = s2[y];

    result[x + y] = '\0';

    return result;
}
