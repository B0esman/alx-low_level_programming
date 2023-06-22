#include <stdio.h>

/**
 * main -  prints all possible combinations of two two-digit numbers.
 *
 * Return: 0 (passed)
 */

int main(void)
{
int i, j;

for (i = 0; i <= 99; i++)
{
for (j = 0; j <= 99; j++)
{
if (i < j && i != j)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + 10);
putchar((j % 10) + 10);
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
