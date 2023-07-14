#include <stdio.h>

/**
 * main - app entry
 * print digit combinations
 * 
 * Return: 0 (success)
 */
int main(void)
{
int num;

for (num = 0; num < 10; num++)
{
putchar(48 + num);
if (num != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
