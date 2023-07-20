#include "main.h"

/**
 * print_numbers - display numbers 0-9 except 2 & 4
 */
void print_most_numbers(void)
{
int num = 0;

while (num <= 9)
{
if (num != 2 && num != 4)
{
_putchar('0'+ num);
}
num++;
}
_putchar('\n');
}
