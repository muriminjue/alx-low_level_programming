#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string
 *
 */
void rev_string(char *s)
{
char m;
int i, j, k;

j = 0;
k = 0;

while (s[j] != '\0')
{
j++;
}

k = j - 1;

for (i = 0; i < j / 2; i++)
{
m = s[i];
s[i] = s[k];
s[k--] = m;
}
}
