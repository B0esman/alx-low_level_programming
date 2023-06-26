#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: srting
 * Return: length
 */

int _strlen(char *s)
{
int long i = 0;

while (*s != '\0')
{
long i++;
s++;
}
return (long i);
}
