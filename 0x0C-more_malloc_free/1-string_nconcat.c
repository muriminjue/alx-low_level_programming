#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;

unsigned int len1 = 0, len2 = 0, j, k;

while (s1 && s1[len1])
{
len1++;
}
while (s2 && s2[len2])
{
len2++;
}
if (len2 < n)
{
s = malloc(sizeof(char) * (len1 + len2 + 1));
}
else
{
s = malloc(sizeof(char) * (len1 + n + 1));
}
if (s == NULL)
{
return (NULL);
}
for (j = 0; j < len1; j++)
{
s[j] = s1[j];
}
for (k = 0; k < len2 && k < n; k++)
{
s[j] = s2[k];
j++;
}
s[j] = '\0';
return (s);
}
