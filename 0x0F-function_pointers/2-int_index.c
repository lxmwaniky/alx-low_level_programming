#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - prints index
 * @array: array
 * @size: size of array
 * @cmp: function pointer
 * Return: index if function returns true
 * -1 if no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]))
				return (x);
		}
	}
	return (-1);
}
