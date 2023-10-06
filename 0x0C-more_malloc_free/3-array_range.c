#include <stdio.h>
#include "main.h"
/**
 * array_range - Array fo Integers
 * @min: min value
 * @max: max value
 * Return: Pointer
 */
int *array_range(int min, int max)
{
	int *m, x;

	if (min > max)
		return (NULL);
	m = malloc(sizeof(int) * (max - min + 1));
	if (m == NULL)
		return (NULL);

	for (x = 0; min <= max; min++, x++)
		m[x] = min;

	return (m);
}
