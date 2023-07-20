#include <stdio.h>

/**
 * main - print largest prime number
 */
int main(void)
{
long int num = 612852475143, largest_prime;

for (long int prime = 2; prime * prime <= num; prime++)
{
if (num % prime == 0)
{
largest_prime = prime;
}
}
printf("%ld \n", largest_prime);
}
