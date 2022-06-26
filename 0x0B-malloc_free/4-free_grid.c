#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d array
 * @grid: int array
 * @height: height of array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
	return;
	
	for (; height >= 0; height--)
	free(grid[height]);
	free(grid);
return;
}
