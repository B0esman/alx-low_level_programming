#includ "main.h"

/**
 * _isupper - function that checks for uppercase character.
 *
 * @c: input character
 *
 * Return: (1) for ture (0) false
 *
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
