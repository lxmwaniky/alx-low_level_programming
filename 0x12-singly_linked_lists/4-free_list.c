#include <stdlib.h>
#include "lists.h"

/**
 * free_list - This code helps frees a linked list
 * @head:The  list_t list is  to be freed
 */
void free_list(list_t *head)
{
list_t *darl;
while (head)
{
darl = head->next;
free(head->str);
free(head);
head = darl;
}
}
