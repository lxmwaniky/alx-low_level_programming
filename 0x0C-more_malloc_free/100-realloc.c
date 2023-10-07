#include "main.h"
#include <stdio.h>
#include <stdlib.h>
void *_memcpy(void *dest, const void *src, unsigned int n);
/**
 * _realloc - reallocate dynamic memory
 * @old_mem_blk: pointer to the old memory block
 * @old_size: size of the mem block
 * @new_size: size of mem block
 * Return: a pointer or NULL
 */
void *_realloc(void *old_mem_blk, unsigned int old_size, unsigned int new_size)
{
	void *new_mem_blk;
	unsigned int min_size;

	if (new_size == old_size)
		return (old_mem_blk);
	if (new_size == 0 && old_mem_blk != NULL)
	{
		free(old_mem_blk);
		return (NULL);
	}

	new_mem_blk = malloc(new_size);
	if (new_mem_blk == NULL)
		return (NULL);

	if (old_mem_blk != NULL)
	{
		min_size = (old_size < new_size) ? old_size : new_size;
		_memcpy(new_mem_blk, old_mem_blk, min_size);

		free(old_mem_blk);
	}

	return (new_mem_blk);
}

/**
 * _memcpy - copy memory area
 * @dest: destination buffer
 * @src: source buffer
 * @n: number of bytes to write
 * Return: A pointer to @dest
 */
void *_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int i;

	char *temp_dest = (char *) dest;
	const char *temp_src = (const char *) src;

	for (i = 0; i < n; i++)
		temp_dest[i] = temp_src[i];
	return (dest);
}
