#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of int 0s
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success) or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
int **gridarr;
int i, j;

if (width < 1 || height < 1)
{
return (NULL);
}
gridarr = malloc(height * sizeof(int *));
if (gridarr == NULL)
{
free(gridarr);
return (NULL);
}

for (i = 0; i < height; i++)
{
gridarr[i] = malloc(width * sizeof(int));
if (gridarr[i] == NULL)
{
for (i--; i >= 0; i--)
{
free(gridarr[i]);
}
free(gridarr);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
gridarr[i][j] = 0;
}
}
return (gridarr);
}
