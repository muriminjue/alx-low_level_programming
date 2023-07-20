#include "main.h"

/**
 * more_numbers - display numbers 0-14 10 times
 */
void more_numbers(void)
{
int count;

for (count = 0; count < 10; count++)
{
int num = 0;
while (num <= 14)
{
if (num > 9)
{
_putchar('1');
} 
_putchar('0' + num % 10);
num++;
}
_putchar('\n');
}
}
