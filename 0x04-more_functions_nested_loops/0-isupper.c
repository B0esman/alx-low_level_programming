#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 *@c: input character
 * Return: (1) for uppercase character  (0) for anything else
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
