#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - sum args
 * @argc: number of arguments
 * @argv: array of argument pointers
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
int sum = 0, count = argc - 1;

while (count > 0)
{
if (!isdigit(*argv[count]))
{
printf("Error\n");
return (1);
}
sum = sum + atoi(argv[count]);
count--;
}
printf("%d\n", sum);
return (0);
}
