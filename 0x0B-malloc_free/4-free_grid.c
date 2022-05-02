#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: pointer to a pointer
 * @height: int var
 */

void free_grid(int **grid, int height)
{
	height--;

	for (; height >= 0; height--)
		free(*(grid + height));
	free(grid);
}
