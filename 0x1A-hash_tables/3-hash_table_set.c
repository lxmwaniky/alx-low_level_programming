#include "hash_tables.h"

/**
 * create_item - create a hash item
 * @key: key
 * @value: value
 * Return: pointer to item
 */
hash_node_t *create_item(const char *key, const char *value)
{
	/* create new item */
	hash_node_t *item = malloc(sizeof(hash_node_t));

	/* allocate space for item values */
	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);

	/* set item values */
	strcpy(item->key, key);
	strcpy(item->value, value);

	/* return the created item */
	return (item);
}

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: the table
 * @key: the key
 * @value: the value of the key
 * Return: 1 (success) or 0 (failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = NULL;
	hash_node_t *current_item = NULL;
	int index;

	if (strlen(key) <= 0)
		return (0);

	/* create the item */
	item = create_item(key, value);

	/* fetch the index at which this item will be according to hash function */
	index = hash_djb2((const unsigned char *)key) % 1024;

	/* check if element at that index is NULL */
	current_item = ht->array[index];
	if (current_item == NULL) /* there is no element there */
		ht->array[index] = item; /* insert new item */
	else /* if the index contains an element already */
	{
		if (strcmp(key, current_item->key) == 0)
		{
			/* if both keys are the same, then just update the value */
			strcpy(ht->array[index]->value, value);
			return (1);
		}

		/* if the keys are not the same, then a collision has happened */
		handle_collision(ht, item, index);
	}
	return (1);
}


/**
 * handle_collision - Handles collision
 * @table: the table
 * @item: the item to add
 * @index: the index at collision
 * Return: nothing
 */
void handle_collision(hash_table_t *table, hash_node_t *item, int index)
{
	hash_node_t *current_item = table->array[index];

	/* check if there is really a collision */
	if (current_item == NULL)
		table->array[index] = item;
	else /* if there is a collision, a linked list is about to start */
	{
		/* add item to the beginning of linked list */
		item->next = current_item;
		table->array[index] = item;
	}
}
