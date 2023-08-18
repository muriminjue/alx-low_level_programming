#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
va_list list;
unsigned int m = 0, n, c = 0;
char *str;
const char type_arg[] = "cifs";

va_start(list, format);
while (format && format[m])
{
n = 0;
while (type_arg[n])
{
if (format[m] == type_arg[n] && c)
{
printf(", ");
break;
} n++;
}
switch (format[m])
{
case 'c':
 printf("%c", va_arg(list, int)), c = 1;
 break;
case 'i':
  printf("%d", va_arg(list, int)), c = 1;
  break;
case 'f':
  printf("%f", va_arg(list, double)), c = 1;
  break;
case 's':
  str = va_arg(list, char *), c = 1;
  if (!str)
  {
  printf("(nil)");
  break;
  }
  printf("%s", str);
  break;
} m++;
}
printf("\n"), va_end(list);
}
