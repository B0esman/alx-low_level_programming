#include <stdio.h>

/**
 * main - printsthe lowercase alphabet in reverse
 *
 * Return: 0 (passed)
 */
int main(void)
{
char letter;
{
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
}
putchar('\n');
return (0);
}
