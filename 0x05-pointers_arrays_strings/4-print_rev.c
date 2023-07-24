#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 *
 */
void print_rev(char *s)
{
int i = 0;
while (i >= 0)
{
if (s[i] == '\0')
{
break;
}
i++;
}
while (i >= 0)
{
_putchar(s[i - 1]);
i--;
}

_putchar('\n');
}
