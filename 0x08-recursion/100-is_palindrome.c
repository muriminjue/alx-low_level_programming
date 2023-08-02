#include "main.h"

/**
 * _strlen_recursion - returns lenth
 * @s: a string
 * Return: integer length
 */
int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}

/**
 * check_pal - check if palindrome
 * @s: a sting
 * @l1: an integer
 * @l2: an integer
 * Return: 1 if true 0 if false
 */
int check_pal(char *s, int l1, int l2)
{
if (s[l1] == '\0')
{
return (1);
}
if (s[l1] != s[l2])
{
return (0);
}
else
{
return (check_pal(s, l1 + 1, l2 - 1));
}
}

/**
 * is_palindrome - check if palindrome
 * @s: a sting
 * Return: 1 if true 0 if false
 */
int is_palindrome(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (check_pal(s, 0, _strlen_recursion(s) - 1));
}
}
