/**
 * print_triangle - print triangle
 * @size: number of #
 */
void print_triangle(int size)
{
int count;
count = 0;

if (size > 0)
{
do
{
int x, y;

for (x = 1; x < size - count; x++)
{
_putchar(' ');
}
for (y = 0; y < count + 1; y++)
{
_putchar(35);
}
_putchar('\n');
count++;
}
while (count < size);
}
else
{
_putchar('\n');
}
}
