#include "main.h"

/**
 * factorial - returns factorial
 * @n: an integer
 * Return: factorial  or -1 if error
 *
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
if (n > 0)
{
return (n * factorial(n - 1));
}
else
{
return (-1);
}
}
