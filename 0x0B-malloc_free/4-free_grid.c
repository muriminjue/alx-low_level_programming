#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
int i;
if (grid != NULL && height != 0)
{
for (i = 0; i < height; i++)
{
free(grid[height]);
}
free(grid);
}
}
