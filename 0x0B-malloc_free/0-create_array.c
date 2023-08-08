#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: input size
 * @c: input character
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
unsigned int j;
char *arrch;

arrch = (char *) malloc(size);
if (size == 0 || arrch == NULL)
{
return (NULL);
}
for (j = 0; j < size; j++)
{
arrch[j] = c;
}
return (arrch);
}
