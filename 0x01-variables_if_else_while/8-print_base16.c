#include <stdio.h>

/**
 * main - app entry
 * print all alphabets in reverse
 * 
 * Return: 0 (success)
 */
int main(void) {
    int hex;

    for (hex = 0; hex < 16; hex++)
    {
        if(hex <10)
        {
            putchar('0' + hex);
        }
        else
        {
            putchar('a' + (hex-10));
        }
    }
    putchar('\n');
    return (0);
}
