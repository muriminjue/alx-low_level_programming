#include <stdio.h>

/**
 * main - first 98 fibbonachi
 * Return: 0 success
 */
int main(void)
{
int count;
unsigned int fib0 = 1, fib1 = 2, prevfeb;

printf("%d, %d", fib0, fib1);
for (count = 0; count < 96; count++)
{
prevfeb = fib1;
fib1 = fib0 + fib1;
printf(", %d", fib1);
fib0 = prevfeb;
}
printf("\n");
return (0);
}
