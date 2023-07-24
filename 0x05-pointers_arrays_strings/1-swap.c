#include "main.h"

/**
 * swap_int - swaps pointer values
 * @a: pointer
 * @b: pointer
 *
 */
void swap_int(int *a, int *b)
{
int m = *a;
*a = *b;
*b = m;
}
