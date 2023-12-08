#include "lists.h"

/**
 * dlistint_len - function that returns number of nodes in a dll
 * @h: head of doubly linked list
 * Return: - number of nodes in the doubly linked list
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int num_of_nodes = 0;

	/* if head passed is NULL */
	if (h == NULL)
		return (0);

	while (current)
	{
		current = current->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
