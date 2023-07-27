#include "main.h"

/**
 * *_strcat - function concatenates srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: new dest string
 */
char *_strcat(char *dest, char *src)
{
int destlength, srclength;

for (destlength = 0; dest[destlength] != '\0'; destlength++)
{
}
for (srclength = 0; src[srclength] != '\0'; srclength++)
{
dest[destlength + srclength] = src[srclength];
}
dest[destlength + srclength] = '\0';
return (dest);
}
