#include <stdio.h>

/**
 * main - app entry
 * print all alphabets in reverse
 *
 * Return: 0 (success)
 */
int main(void)
{
char alphabet;

for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
