#include "main.h"

/**
 * *reverse_array - function compares 2 strings
 * @a: param pointer to a array of integers
 * @n: param pointer to a length of a
 */
void reverse_array(int *a, int n)
{
int i = 0, j = 0, tmp[n];

while (i < n)
{
tmp[i] = a[n - 1 - i];
i++;
}
while (i > 0)
{
a[j] = tmp[j];
j++;
i--;
}
}
