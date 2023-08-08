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
int **twodarr;
int m, n;

if (height <= 0 || width <= 0)
{
return (NULL);
}

twodarr = (int **) malloc(sizeof(int *) * height);

if (twodarr == NULL)
{
return (NULL);
}

for (m = 0; m < height; m++)
{
twodarr[m] = (int *) malloc(sizeof(int) * width);
if (twodarr[m] == NULL)
{
free(twodarr);
}
for (n = 0; n <= m; m++)
{
free(twodarr[n]);
return (NULL);
}
}

for (m = 0; m < height; m++)
{
for (n = 0; n < width; n++)
{
twodarr[m][n] = 0;
}
}
return (twodarr);
}
