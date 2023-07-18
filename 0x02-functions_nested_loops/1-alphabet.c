#include "main.h"

/**
 * print_alphabet - writes alphabets in lowercase
 */
void print_alphabet(void)
{
int alphabet;

for (alphabet = 97; alphabet <= 122; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}
