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
int num2;

for (num = 0; num <= 9; num++)
{
for (num1 = num + 1 ; num1 <= 9; num1++)
{
for (num2 = num1 + 1 ; num2 <= 9; num2++)
{
putchar(48 + num);
putchar(48 + num1);
putchar(48 + num2);
if (num != 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
