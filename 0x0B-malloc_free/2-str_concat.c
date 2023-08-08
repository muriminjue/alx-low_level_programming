#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
int i, j, len1 = 0, len2 = 0, max;
char *news;

if (s1 != NULL)
{
i = 0;
while (s1[i++] != '\0')
{
len1++;
}
}

if (s2 != NULL)
{
i = 0;
while (s2[i++] != '\0')
{
len2++;
}
}

max = len1 + len2;
news = (char *)malloc(sizeof(char) * (max + 1));
if (news == NULL)
{
return (NULL);
}

for (i = 0; i < len1; i++)
{
news[i] = s1[i];
}
for (j = 0; j < len2; j++, i++)
{
news[i] = s2[j];
}
news[max] = '\0';

return (news);
}
