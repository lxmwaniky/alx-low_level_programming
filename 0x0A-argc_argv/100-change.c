#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns minimum change coins
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int m, x = 0, y;
	int d[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	y = atoi(argv[1]);

	if (y < 1)
	{
		printf("0\n");
		return (0);
	}

	for (m = 0; m < 5; m++)
	{
		x = x + y / d[m];
		y = y % d[m];
	}
	printf("%d\n", x);

	return (0);
}

