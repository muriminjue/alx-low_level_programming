#include <stdio.h>

/**
 * main - app entry
 *
 * Return: (0)
 */
int main(void)
{
int num;
int num1;

for (num = 0; num <= 9; num++)
{
for (num1 = num + 1 ; num1 <= 9; num1++)
{
putchar(48 + num);
putchar(48 + num1);
if (num != 8)
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
