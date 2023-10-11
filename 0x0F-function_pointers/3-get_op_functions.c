#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - gets math operator
 * @s: operator passed
 * Return: integer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t opers[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int x;

	x = 0;
	while (opers[x].op != NULL)
	{
		if (strcmp(s, opers[x].op) == 0)
			return (opers[x].f);
		x++;
	}

	return (NULL);
}
