#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - sum of args
 * @argc: number of arguments
 * @argv: array of argument pointers
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
int sum = 0, count = argc - 1, pos;

while (count > 0)
{
for (pos = 0; argv[count][pos] != '\0'; pos++)
{
if (!isdigit(argv[count][pos]))
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[count]);
count--;
}
printf("%d\n", sum);
return (0);
}
