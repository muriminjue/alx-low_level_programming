#include <stdio.h>

/**
 * main -  prints all args
 * @argc: number of arguments
 * @argv: array of argument pointers
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
int n;

for (n = 1; n < argc; n++)
{
printf("%s\n", argv[n]);
}
return (0);
}
