#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node in  linked list at certain index
 * @head:This is a pointer to the first element in the list
 * @index:This is the index of the node to delete
 *
 * Return:Number 1 as (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		j++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
