#include "lists.h"

/**
 * add_dnodeint_end - add node at the ending
 * @head: double pointer to head
 * @n: data section to append infront of dll
 * Return: address of new node
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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

		/* traversing */
		while (currnt->next)
			currnt = currnt->next;
		currnt->next = new_node;
		new_node->next = NULL;
		new_node->prev = currnt;
	}

	return (new_node);
}
