#include "main.h"

/**
 * cap_string - capitalise each word
 * @str: param pointer to a string of char
 * Return:  string of uppercase chat
 */
char *cap_string(char *str)
{
int i = 0, j;

char spec[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
'"', '(', ')', '{', '}'};

while (str[i] != '\0')
{
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
for (j = 0; j < 13; j++)
{
if (str[i] == spec[j])
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
str[i + 1] = str[i + 1] - 32;
}
}
}
i++;
}
return (str);
}
