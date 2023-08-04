#include "main.h"

/**
 * *_strncat - function concatenates srtings upto n
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * @n: param number of unit to append to dest from src
 * Return: new dest string
 */
char *_strncat(char *dest, char *src, int n)
{
int destlength, srclength;

for (destlength = 0; dest[destlength] != '\0'; destlength++)
{
}
for (srclength = 0; src[srclength] != '\0' && srclength < n; srclength++)
{
dest[destlength + srclength] = src[srclength];
}
dest[destlength + srclength] = '\0';
return (dest);
}
