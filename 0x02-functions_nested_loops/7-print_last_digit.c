#include "main.h"
/**
 * print_last_digit - 24 hours count down
 * @num: any number
 * Return: int
 */

int print_last_digit(int num)
{
int last_digit =  num % 10;

_putchar('0' + last_digit);
return (last_digit);
}
