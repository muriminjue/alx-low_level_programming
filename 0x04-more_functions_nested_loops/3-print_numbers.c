#include "main.h"

/**
 * print_numbers - display numbers 0-9
 */
void print_numbers(void)
{
int num = 0;

while (num <= 9)
{
_putchar('0'+ num);
num++;
}
_putchar('\n');
}
