#include "lists.h"

/**
 * print_list - prints all node values
 * @h: head
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;
	const list_t *current;

	current = h;
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
