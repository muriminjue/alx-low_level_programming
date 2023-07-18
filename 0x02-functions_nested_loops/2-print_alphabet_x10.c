#include "main.h"

/**
 * main - writes alphabets in lowecase 10 times
 *
 * Return: 0
 */
int main(void) 
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
return (0);
}
