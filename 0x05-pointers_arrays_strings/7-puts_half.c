#include "main.h"

/**
 * puts_half - prints last half of string
 * @str: string
 *
 */
void puts_half(char *str)
{
int i = 0, j;

while (str[i] != '\0')
{
i++;
}
j = (i - 1) / 2;
while (j < i - 1)
{
_putchar(str[j + 1]);
j++;
}
_putchar('\n');
}
