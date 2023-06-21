#include "main.h"

/**
 * main - Computes sum of all the multipiles of 3 or 5 below 1024 (excluded)
 *
 * Return: 0 (passed)
 */

int main(void)
{
int sum, num;
{
for (num = 0; num < 1024; num++)
{
if ((num % 3 == 0) || (num % 5 == 0))
sum += num;
}
printf("%d\n". sum);

return (0);
}
