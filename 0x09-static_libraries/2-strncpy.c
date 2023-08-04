#include "main.h"

/**
 * *_strncpy - function copies srtings upto n
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * @n: new field of the old to copy
 * Return: new dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
int srclength = 0;

while (src[srclength] != '\0' && srclength < n)
{
dest[srclength] = src[srclength];
srclength++;
}
while (srclength < n)
{
dest[srclength] = '\0';
srclength++;
}
return (dest);
}
