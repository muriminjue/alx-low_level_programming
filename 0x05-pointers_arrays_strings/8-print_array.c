#include "main.h"

/**
 * print_array - prints array of intergers
 * @a: array
 * @n: integer
 *
 */
void print_array(int *a, int n)
{
int i = 1;
printf("%d", *(a));

while (i < n)
{
printf(", %d", *(a + i));
i++;
}
printf("\n");
}
