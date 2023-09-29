#include <stdio.h>
/**
  *main - Printsnumber of arguementspassed on to us
  *@argc: count
  *@argv: vector
  *Return: 0
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
