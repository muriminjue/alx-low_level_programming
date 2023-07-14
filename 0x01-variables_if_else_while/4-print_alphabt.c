#include <stdio.h>

/**
 * main - app entry
 * print all alphabets
 *
 * Return: 0 (success)
 */
int main(void)
{
char alphabet;

for (alphabet ='a'; alphabet <= 'z'; alphabet++)
{
if (alphabet != 'e' || alphabet != 'q')
{
putchar(alphabet);
}
}
putchar('\n');
return (0);
}
