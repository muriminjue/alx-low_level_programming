#include "3-calc.h"

/**
 * get_op_func - array of pointers to functions
 * @s: string
 *
 * Return: 0 success or operation rersult
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{ "+", op_add },
{ "-", op_sub },
{ "*", op_mul },
{ "/", op_div }
{ "%", op_mod },
{ NULL, NULL }
};
int i = 0;

while (i < 5)
{
if (strcmp(s, ops[i].op) == 0)
{
return (ops[i].f);
}
i++;
}

return (0);
}
