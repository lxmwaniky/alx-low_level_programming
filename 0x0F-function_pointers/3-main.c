#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - entry
 *
 * desc: calculator
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0 if success
 */

int main(int argc, char *argv[])
{
	int f, s, ans, (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	f = atoi(argv[1]);
	s = atoi(argv[3]);

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && s == 0)
	{
		printf("Error\n");
		return (100);
	}

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		return (99);
	}
	ans = op(f, s);
	printf("%d\n", ans);

	return (0);
}
