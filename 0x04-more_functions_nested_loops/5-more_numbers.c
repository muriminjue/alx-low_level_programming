#include "main.h"

/**
 * print_most_numbers - display numbers 0-14 10 times
 */
void print_most_numbers(void)
{
int count = 0;

for (; count < 10; count++)
{
int num = 0;
while (num <= 14)
{
if (num > 9)
{
_putchar('0'+ num / 10);
_putchar('0'+ num % 10);
}   
else
{
_putchar('0'+ num);
}
num++;
}
_putchar('\n');
}
}
