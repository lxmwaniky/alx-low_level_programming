#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterates func ptr
 * @array: array
 * @size: size of array
 * @action: functon pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
