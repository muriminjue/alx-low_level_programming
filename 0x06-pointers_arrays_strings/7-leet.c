#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: param pointer to a string of char
 * Return: string str of chars encoded
 */

char *leet(char *str)
{
int count = 0, m;
int lower_letters[] = {97, 101, 111, 116, 108};
int upper_letters[] = {65, 69, 79, 84, 76};
int rep_numbers[] = {52, 51, 48, 55, 49};

while (str[count] != '\0')
{
for (m = 0; m < 5; m++)
{
if (str[count] == lower_letters[m] || str[count] == upper_letters[m])
{
str[count] = rep_numbers[m];
break;
}
}
count++;
}
return (str);
}
