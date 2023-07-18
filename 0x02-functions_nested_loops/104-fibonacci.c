#include <stdio.h>

/**
 * main - first 98 fibbonachi
 * Return: 0 success
 */
int main(void)
{
int count;
unsigned long fib0 = 1, fib1 = 2, prevfeb;

printf("%lu, %lu", fib0, fib1);
for (count = 0; count < 96; count++)
{
prevfeb = fib1;
fib1 = fib0 + fib1;
printf(", %lu", fib1);
fib0 = prevfeb;
}
printf("\n");
return (0);
}
