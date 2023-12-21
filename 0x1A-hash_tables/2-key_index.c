#include "hash_tables.h"

/**
 * key_index - function to give key index
 * @key: the key
 * @size: the size of the array in the hash tbl
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
