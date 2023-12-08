#include "lists.h"

/**
 * add_dnodeint - add node at the beginning
 * @head: double pointer to head
 * @n: data section to append infront of dll
 * Return: address of new node
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* create a new node */
	dlistint_t *new_node;
	/* create a node for traversing */
	dlistint_t *currnt = NULL;

	/* allocate space for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/* set data section of new_node */
	new_node->n = n;

	/* if dll is empty, head is NULL */
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		currnt = *head;
		currnt->prev = new_node;
		new_node->next = currnt;
		new_node->prev = NULL;
		*head = new_node;
	}

	return (new_node);
}
