#include "main.h"

/**
 * print_array - prints array of intergers
 * @a: array
 * @n: integer
 *
 */
void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
if (i == n - 1)
{
printf("%d", *(a + n - 1));
}
else
{
printf("%d, ", *(a + i));
}
i++;
}
printf("\n");
}
