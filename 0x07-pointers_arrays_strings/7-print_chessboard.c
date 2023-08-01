#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
int q, p;

for (q = 0; q < 8; q++)
{
for (p = 0; p < 8; p++)
{
_putchar(a[q][p]);
}
_putchar('\n');
}
}
