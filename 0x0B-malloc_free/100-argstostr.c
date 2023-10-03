#include <malloc.h>
#include <string.h>
/**
 * argstostr - concatenates arguments
 * @argc: No. of args
 * @argv: point variable to a pointer
 * Return: Ponter to string, NULL if empty
 */
char *argstostr(int argc, char **argv)
{
	char *new;
	int x, y;

	if (argc == 0 || argv == NULL)
		return (NULL);

	y = 0;

	for (x = 0; x < argc; x++)
		y += strlen(argv[x]) + 1;

	new = (char *) malloc(y * sizeof(char) + 1);

	if (new == NULL)
		return (NULL);

	new[0] = '\0';

	for (x = 0; x < argc; x++)
	{
		strcat(new, argv[x]);
		strcat(new, "\n");
	}

	return (new);
}
