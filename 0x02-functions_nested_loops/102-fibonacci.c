#include <stdio.h>

/**
 * main - first 50 fibbonachi
 * Return: 0 success
 */
int main(void) 
{
int fib0 = 1, fib1 =2, prevfeb, count;

printf("%d, %d", fib0, fib1);
for (count = 0; count < 50; count ++)
{
prevfeb = fib1;
fib1 += fib0;
printf(", %d", fib1);
fib0 = prevfeb;
}
printf("\n");
return (0);
}
