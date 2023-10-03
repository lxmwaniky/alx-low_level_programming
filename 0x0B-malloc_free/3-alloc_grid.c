#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - allocate grid
 *@width: width.
 *@height: height.
 *Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **grd, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grd = malloc(sizeof(int *) * height);
	if (grd == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		grd[y] = malloc(sizeof(int) * width);
		if (grd[y] == NULL)
		{
			for (y--; y >= 0; y--)
				free(grd[y]);
			free(grd);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
		for (x = 0; x < width; x++)
			grd[y][x] = 0;
	return (grd);
}
