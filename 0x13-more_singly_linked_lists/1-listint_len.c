#include "lists.h"

/**
 * listint_len - This code returns the number of elements in a linked lists
 * @h: A linked list of type listint_t to traverse
 *
 * Return:The  number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}

