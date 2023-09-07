#include <unistd.h>

int echo_err(const char *s);

/**
 * main - driver
 *
 * Return: 1
 */
int main(void)
{
	echo_err("and that piece of art is useful\" - Dora Korpar, 2015-10-19");

	return (1);
}

/**
 * echo_err - send text to standard error (stderr)
 *
 * @s: string
 *
 * Return: number of characters sent to stderr
 */
int echo_err(const char *s)
{
	int i = 0;

	for (; *s; s++)
		i += write(2, s, 1);
	write(2, "\n", 1);

	return (i);
}
