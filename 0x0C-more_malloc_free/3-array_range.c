#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int *ptr, i;

if (min > max)
{
return (NULL);
}

ptr = malloc(sizeof(int) * (max - min + 1));
if (ptr == NULL)
{
return (NULL);
}

for (i = 0; min <= max; i++)
{
ptr[i] = min;
min++;
}
return (ptr);
}
