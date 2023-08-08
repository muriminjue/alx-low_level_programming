#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
char *news;
unsigned int i, j, len1 = 0, len2 = 0;

while (s1 && s1[len1])
{
len1++;
}
while (s2 && s2[len2])
{
len2++;
}

s3 = malloc(sizeof(char) * (len1 + len2 + 1));
if (s3 == NULL)
{
return (NULL);
}

if (s1)
{
for (i = 0; i < len1; i++)
{
news[i] = s1[i];
i++;
}
}

if (s2)
{
for (j = 0; j < len2; j++)
{
news[i] = s2[j];
i++;
}
}
news[i] = '\0';

return (news);
}
