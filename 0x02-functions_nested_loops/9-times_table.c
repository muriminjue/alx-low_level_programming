#include "main.h"
/**
 * times_table - table of multiples
 */

void times_table(void)
{
int n;

for(n = 0; n <= 9; n++)
{
int m;

for(m = 0; m <= 9; m++)
{
int value = n * m;

if (m > 0)
{
_putchar(',');
_putchar(' ');
}
if (value / 10 < 1){
_putchar(' ');
}
if (value > 9)
{
_putchar('0'+ value / 10);
_putchar('0'+ value % 10);
}
else
{
_putchar('0'+ value);
}

}
_putchar('\n');
}
}
