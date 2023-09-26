#include "main.h"

/**
 * set_string - sets the value of pointer to a char
 *
 * @s: a pointer to a pointer to string
 * @to: a pointer to a string
 */
void set_string(char **s, char *to)
{
	*s = to;
}
