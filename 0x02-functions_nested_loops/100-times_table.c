#include "main.h"

/**
 * print_times_table - table of multiples
 * @n: integer to be computed
 */

void print_times_table(int n)
{
if (n < 15 && n >= 0)
{
int j,m;

for (j = 0; j <= n; j++)
{
for (m = 0; m <= n; m++)
{
int value = j * m;
if (m > 0)
  _putchar(',');
  _putchar(' ');
if (value / 10 < 1 && m > 0)
{
_putchar(' ');
}
if (value / 100 < 1 && m > 0)
{
_putchar(' ');
}
if (value / 100 >= 1)
{
_putchar('0' + value / 100);
_putchar('0' + (value / 10) % 10);
_putchar('0' + value % 10);
}
else if (value > 9)
{
_putchar('0' + value / 10);
_putchar('0' + value % 10);
}
else
{
_putchar('0' + value);
}
}
_putchar('\n');
}
}
}
