#include "lists.h"

/**
 * free_listint -This code frees a linked list
 * @head: This  listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
