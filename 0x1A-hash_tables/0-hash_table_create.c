#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to a table
 */
hash_table_t *hash_table_create(int size)
{
	unsigned long int i = 0;
	/* create table */
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	/* set table attributes */
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));

	/* set all elements to NULL */
	for (; i < table->size; i++)
		table->array[i] = NULL;

	/* return table created */
	return (table);
}
