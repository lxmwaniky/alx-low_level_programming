#include <stdio.h>
#include <stdlib.h>
/**
  *main - prints product of 2 arguments
  *@argc: count
  *@argv: vector
  *Return: 1 if argument != 3, else 0
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
