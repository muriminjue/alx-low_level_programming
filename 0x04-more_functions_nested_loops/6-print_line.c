#include "main.h"

/**
 * print_line - prints line
 * @n: number of times line is printed
 */
void print_line(int n)
{
int count = 0;

while (count < n)
{
_putchar(95);
count++;
}
_putchar('\n');
}
