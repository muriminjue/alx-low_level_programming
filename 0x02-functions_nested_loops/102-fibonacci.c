#include <stdio.h>

/**
 * main - first 50 fibbonachi
 * Return: 0 success
 */
int main(void) 
{
int count;
long int fib0 = 1, fib1 =2, prevfeb;
printf("%ld, %ld", fib0, fib1);

for (count = 0; count < 48; count ++)
{
prevfeb = fib1;
fib1 = fib0 + fib1;
printf(", %ld", fib1);
fib0 = prevfeb;
}
printf("\n");
return(0);
}
