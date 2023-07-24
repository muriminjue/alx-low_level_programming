#include <stdio.h>

/**
 * main - print largest prime number
 * Return: 0 Success
 */
int main(void)
{
long int num = 612852475143, largest_prime, prime;

for (prime = 2; prime * prime <= num; prime++)
{
if (num % prime == 0)
{
largest_prime = prime;
}
}
printf("%ld \n", largest_prime);
return (0);
}
