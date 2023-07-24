#include "main.h"

/**
 * _strlen - gewts length of a string
 * @s: string
 * Return: length of the string as integer
 */
int _strlen(char *s)
{
int i = 0;
while (i >= 0)
{
_putchar(s[i]);
if (s[i] == '\0')
{
break;
}
i++;
}

return (i);
}
