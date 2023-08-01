#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int m = 0, n = 0;

while (haystack[m])
{
while (needle[n] && (haystack[m] == needle[0]))
{
if (haystack[m + n] == needle[n])
{
n++;
}
else
{
break;
}
}
if (needle[j])
{
m++;
n = 0;
}
else
{
return (haystack + m);
}
}
return (0);
}
