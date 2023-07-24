#include "main.h"

/**
 * _puts - prints string
 * @str: string
 *
 */
void _puts(char *str)
{
int i = 0;

while (i >= 0)
{
if (str[i] == '\0')
{
break;
}
_putchar(str[i]);
i++;
}
}
