#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: No of args
 * @argv: Array
 * Return: 0 on success, 1 for incorrect number of arguments,
 * 2 for negative number of bytes.
 */
int main(int argc, char *argv[])
{
	int x, num_bytes;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Print the opcodes */
	ptr = (unsigned char *)main;
	for (x = 0; x < num_bytes; x++)
	{
		printf("%02x ", ptr[x]);
	}
	printf("\n");

	return (0);
}
