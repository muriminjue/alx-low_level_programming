#include "main.h"

/**
 * main - writes alphabets in lowecase 10 times
 */
void print_alphabet_x10(void) 
{
int count = 0;

while (count < 10)
{
int alphabet;

for (alphabet = 97; alphabet <= 122; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
count++;
}
}
