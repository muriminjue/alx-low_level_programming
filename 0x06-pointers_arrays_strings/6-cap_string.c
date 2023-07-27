#include "main.h"

/**
 * cap_string - capitalise each word
 * @str: param pointer to a string of char
 * Return:  string of uppercase chat
 */
char *cap_string(char *str)
{
int count = 0;

if (str[count] >= 97 && str[count] <= 122)
{
str[count] = str[count] - 32;
}
count++;

while (str != '\0')
if (str[count] >= 'A' && str[count] <= 'z')
{
if ((s[count - 1] == ' ' || str[count - 1] == '\n'
|| str[count - 1] == '\t' || str[count - 1] == ','
|| str[count - 1] == ';' || str[count - 1] == '!'
|| str[count - 1] == '?' || str[count - 1] == '"'
|| str[count - 1] == '(' || str[count - 1] == ')'
|| str[count - 1] == '{' || str[count - 1] == '}'
|| str[count - 1] == '.') && (str[count] >= 'a' && str[count] <= 'z'))
{
str[count] = str[count] - 32;
}
count++
}
return (str)
}
