#include <stdio.h>

/**
 * main - print all possible combinations of single digit number
 *
 * Return: 0 (passed)
 */
int main(void)
{
int i = '0';

while (i <= '9')
{
putchar(i);
if (i != '9')
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
