#include <stdio.h>

/**
 * main- app entry
 *
 * Return: 0
 */
int main(void) 
{
int num; 
int num1;

for (num = 0; num <= 99; num++) {
for (num1 = num; num1 <= 99; num1++) {
if (num1 != num)
{
putchar('0' + (num / 10));
putchar('0' + (num % 10));
putchar(' ');
putchar('0' + (num1 / 10));
putchar('0' + (num1 % 10));
if (num != 99 || num1 != 99) 
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return 0;
}
