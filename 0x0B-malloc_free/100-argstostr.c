#include "main.h"

/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string NULL on fail.
  */
char *argstostr(int ac, char **av)
{
int m = 0, n, o = 0, size = 0;
char *a;

if (ac == 0 || av == NULL)
{
return (NULL);
}
while (m < ac)
{
n = 0;
while (av[m][n])
{
size++;
n++;
}
size++;
m++;
}
a = malloc((sizeof(char) * size) +1);
if (a == NULL)
{
return (NULL);
}
m = 0;
while (m < ac)
{
n = 0;
while (av[m][n])
{
a[o] = av[m][n];
n++;
o++;
}
a[o] = '\n';
o++;
m++;
}
a[o] = '\0';
return (a);
}
