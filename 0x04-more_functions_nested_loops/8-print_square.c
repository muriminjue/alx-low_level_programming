#include "main.h"

/**
 * print_square - print slashes
 * @size: number of #
 */
void print_square(int size)
{
int x, y;
x = 0;

do {
for (y = 0; y < size; y++)
{
_putchar(35);
}
_putchar('\n');
x++;
} while (x < size);
}
