#include <stdio.h>

/**
 * main - entry point
 *
 * desc: prints a program name using arguments
 * @argc: parameter argc
 * @argv: parameter argv
 * Return: 0 if works
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
