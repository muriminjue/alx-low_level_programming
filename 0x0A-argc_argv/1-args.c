#include <stdio.h>

/**
 * main -  prints count of args
 * @argc: number of arguments
 * @argv: array of argument pointers
 * Return: 0 id succes
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
