#include <stdio.h>

/**
 * main - app entry
 * print all numbers                                                                                                                                                   
 * 
 *Return: 0 (success)
 */
int main(void) {
    for (int num = 0; num < 10; num++)
    {
      putchar(48+num);
    }
    putchar('\n');
    return (0);
}
