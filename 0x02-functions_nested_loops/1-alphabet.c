#include "main.h"

/**
 * main - writes alphabets in lowecase
 *
 * Return: 0
 */
void print_alphabet(void) 
{
int alphabet;

for (alphabet = 97; alphabet <= 122; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
return (0);
}
