#include "main.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: number of arguments passed to the function
 * Return: the resulting sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list nums;
unsigned int i, sum = 0;

if (n == 0)
{
return (0);
}

va_start(nums, n);
for (i = 0; i < n; i++)
{
sum += va_arg(nums, int);
}
va_end(nums);
return (sum);
}
