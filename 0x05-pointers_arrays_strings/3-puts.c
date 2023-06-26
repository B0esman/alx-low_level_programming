#include "main.h"
/**
 * puts - prints a string, followed by a new line to stdout
 * @str: string to print
 * Return: string and new line
 */

int void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
