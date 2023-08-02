#include "main.h"

/**
 * _pow_recursion - returns power of int x to y
 * @x: an integer
 * @y: an integer 
 * Return: int x raised to power y or -1 if error
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
