#include "main.h"

/**
 * print_times_tables - prints time table of n
 *
 * @n: takes number input
 */

void print_times_table(int n)

{
	int prod, mult, num;

	if (n <= 15 && n >= 0)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar(48);
	for (mult = 1; mult <= n; mult++)
	{
	_putchar(',');
	_putchar(' ');

	prod = num * mult;

	if (prod <= 9)
	_putchar ((prod / 100) + 49);
	_putchar ((prod / 10) % 10 + 48);
	}
        if (prod <= 99 && prod >= 10)
	_putchar((prod / 10) + 48);
	_putchar((prod % 10) + 48);
	}
	_putchar('\n');
	}
}
