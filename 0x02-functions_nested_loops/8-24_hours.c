/**
 * jack_bauer - 24 hours count down
 */

void jack_bauer(void)
{
int n;

for(n = 0; n <= 23; n++)
{
int m;

for(m = 0; m <= 59; m++)
{
_putchar('0'+ n / 10);
_putchar('0'+ n % 10);
_putchar(':');
_putchar('0'+ m / 10);
_putchar('0'+ m % 10);
_putchar('\n');
}
}
}
