#include <stdio.h>

/**
 * main - Fizz Buzz
 * Return: 0 success
 */
int main(void)
{
int count;

for (count = 1; count <= 100; count++)
{
if (count % 15 == 0)
{
printf(" FizzBuzz");
}
else if (count % 5 == 0)
{
printf(" Buzz");
}
else if (count % 3 == 0)
{
printf(" Fizz");
}
else if (count == 1)
{
printf("%d", count);
}
else
{
printf(" %d", count);
}
}
printf("\n");
return (0);
}
