#include "main.h"

/**
 * _print_rev_recursion - writes the string s in reverse
 * @s: a string
 *
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_puts_recursion(s + 1);
_putchar(*s);
}
else
{
_putchar('\n');
}
}
