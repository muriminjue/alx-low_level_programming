#include "main.h"

/**
 * word_count - helper function to count the number of words in a string
 * @str: string to evaluate
 * Return: number of words
 */
int word_count(char *str)
{
int space = 0, c, w = 0;
for (c = 0; str[c] != '\0'; c++)
{
if (str[c] == ' ')
{
space = 0;
}
else if (space == 0)
{
space = 1;
w++;
}
}
return (w);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success) or NULL
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int m, n = 0, len = 0, words = word_count(str), o = 0, start, end;
while (*(str + len))
{
len++;
}
words = word_count(str);
if (words == 0)
{
return (NULL);
}
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
{
return (NULL);
}
for (m = 0; m <= len; m++)
{
if (str[m] == ' ' || str[m] == '\0')
{
if (o)
{
end = m;
tmp = (char *) malloc(sizeof(char) * (o + 1));
if (tmp == NULL)
{
return (NULL);
}
while (start < end)
{
*tmp++ = str[start++];
}
*tmp = '\0';
matrix[n] = tmp - o;
n++;
o = 0;
}
}
else if (o++ == 0)
{
start = m;
}
}
matrix[n] = NULL;
return (matrix);
}

