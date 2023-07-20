#include "main.h"

/**
 * print_diagonal - print slashes
 * @n: number of slashes
 */
void print_diagonal(int n)
{
int count;

for (count = 0; count < n; count++)
{
int spaces;

for (spaces = count; spaces > 0; spaces--)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
