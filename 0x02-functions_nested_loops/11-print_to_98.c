#include <stdio.h>


/**
 * print_to_98 - print from n to 98
 * @n: starting pint integer
 */

void print_to_98(int n)
{
int count = 98 - n;
int m;

if (count < 0)
{
count = -count;
}
for (m = 0; m < count; m++)
{
if (n < 98)
{
printf("%d, ", n);
n++;
}
else
{
printf("%d, ", n);
n--;
}
}
printf("98");
printf("\n");
}
