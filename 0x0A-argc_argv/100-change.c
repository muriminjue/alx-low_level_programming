#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - return change
 * @argc: number of arguments
 * @argv: array of argument pointers
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
int n, m, o, coins = 0;
int opt[5] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

o = atoi(argv[1]);

for (m = 0; m < 5; m++)
{
n = o / opt[m];
if (n > 0)
{
coins += n;
o -= opt[m] * n;
}
}

printf("%d\n", coins);
return (0);
}
