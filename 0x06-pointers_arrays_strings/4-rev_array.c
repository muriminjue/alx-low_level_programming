#include "main.h"

/**
 * reverse_array - function compares 2 strings
 * @a: param pointer to a array of integers
 * @n: param pointer to a length of a
 */
void reverse_array(int *a, int n)
{
int m, o, temp;

o = n - 1;

for (m = 0; m < n / 2; m++)
{
temp = a[m];
a[m] = a[o];
a[o--] = tmp;
}
