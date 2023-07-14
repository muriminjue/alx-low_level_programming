#include <stdio.h>

/**
 * main - app entry
 * print all numbers
 *
 *Return: 0 (success)
 */
int main(void)
{
int num

{
for (num = 0; num < 10; num++)
{
putchar(48 + num);
}
putchar('\n');
return (0);
}
