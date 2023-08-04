#include "main.h"

/**
 * _isalpha - checks if is an alphabet
 * @c: any alphabet
 * Return: int 1, o or -1
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
