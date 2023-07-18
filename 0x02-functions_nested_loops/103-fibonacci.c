#include <stdio.h>

/**
 * main - first 50 fibbonachi
 * Return: 0 success
 */
int main(void)
{
long int fib0 = 1, fib1 = 2, prevfeb, sum = 2;

while (fib1 <= 4000000)
{
prevfeb = fib1;
fib1 = fib0 + fib1;
if (fib1 % 2 == 0)
{
sum = sum + fib1;
}
fib0 = prevfeb;
}
printf("%ld\n", sum);
return (0);
}
