#include "main.h"

/**
 * *_strcmp - function compares 2 strings
 * @s1: param pointer to a char
 * @s2: param pointer to a char
 * Return: integer +/-
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2 && *s1 != '\0')
{
s1++;
s2++;
}
if (s1 != s2)
{
return (*s1 - *s2);
}
else
{
return (0);
}
}
