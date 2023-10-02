#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array
 * @size: size of array
 * @c: character to be inserted
 *
 * desc: using malloc, I am able to return a pointer to a locally created array
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (m = 0; m < size; m++)
		arr[m] = c;
	return (arr);
}
