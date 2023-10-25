#include "lists.h"

/**
 * pop_listint - This code deletes the head node of a linked list
 * @head: The pointer to the first element in the linked list
 *
 * Return:This is  the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numb);
}
