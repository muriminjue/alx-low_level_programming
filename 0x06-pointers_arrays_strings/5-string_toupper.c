#include "main.h"

/**
 * *string_toupper - function converts strings to uppercase
 * @str: param pointer to a string of char
 * Return:  string of uppercase chat
 */
char *string_toupper(char *str)
{
int count = 0;
while (str != '\0')
{
if (str[count] >= 'a' && str[count] <= 'z')
{
str[count] = str[count] - 32;
}
count++
}
return (str)
}
