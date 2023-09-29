#include <stdio.h>
#include <stdlib.h>
/**
  *main - prints sum of 2 +ve no.s
  *@argc: count
  *@argv: vector
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int x, y, result = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (x = 1; x < argc; x++)
		{
			for (y = 0; argv[x][y] != '\0'; y++)
			{
				if (argv[x][y] < '0' || argv[x][y] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[x]);
		}
		printf("%d\n", result);
	}

	return (0);
}
