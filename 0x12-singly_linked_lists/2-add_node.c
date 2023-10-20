#include "lists.h"

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: head
 * @str: constant string as data of node
 * Return: pointer to a node (the new node)
 */

list_t *add_node(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL) /* if memory allocation fails, return NULL */
		return (NULL);


	new_node->str = new_str;
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;


	return (new_node);
}
