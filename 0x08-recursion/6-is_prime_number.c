/**
 * check_prime - check if an input number is a prime number.
 * @n: integer.
 * @m: integer.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int check_prime(int n, int m)
{
if (n % m == 0)
{
if (n == m)
{
return (1);
}
else
{
return (0);
}
}
return (0 + check_prime(n, m + 1));
}
/**
 * is_prime_number - check if an input number is a prime number.
 * @n: interger.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */
int is_prime_number(int n)
{
if (n == 0)
{
return (0);
}
if (n < 0)
{
return (0);
}
if (n == 1)
{
return (0);
}
return (check_prime(n, 2));
}
