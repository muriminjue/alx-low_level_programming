#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - App entry
 *
 * Return: 1 (successful)
 */
int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(STDOUT_FILENO, quote, strlen(quote));
return(1);
}
