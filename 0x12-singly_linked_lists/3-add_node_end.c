#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - This helps add a new node at the end of a linked list
 * @head: This is a  double pointer to the list_t list
 * @str: A string to put in the new node
 *
 * Return:This is the  address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *man;
list_t *darl = *head;
unsigned int len = 0;
while (str[len])
len++;
man = malloc(sizeof(list_t));
if (!man)
return (NULL);
man->str = strdup(str);
man->len = len;
man->next = NULL;
if (*head == NULL)
{
*head = man;
return (man);
}
while (darl->next)
darl = darl->next;
darl->next = man;
return (man);
}
