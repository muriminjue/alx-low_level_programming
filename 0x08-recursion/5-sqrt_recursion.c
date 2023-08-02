#include "main.h"

/**
 * _check_square - iterates until  root
 * @a: an possible root
 * @b: an integer 
 * Return: int square root of b or -1 if error
 */
int _check_square(int a, int b)
{
if (a * a > b)
{
return (-1);
}
if (a * a == b)
{
return (a);
}
else
{
return (_check_square(a + 1, b));
}
}


/**
 * _sqrt_recursion - returns root of n
 * @n: an integer 
 * Return: root of n or -1 if error
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
else if (n < 0)
{
return (-1);
}
else
{
return (_check_square(1, n));
}
}
