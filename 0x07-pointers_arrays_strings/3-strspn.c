#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int m, n, o;

for (m = 0; s[m] != '\0'; m++)
{
o = 1;
for (n = 0; accept[n] != '\0'; n++)
{
if (s[m] == accept[n])
{
o = 0;
break;
}
if (o == 1)
{
break;
}
}
return (m);
}
