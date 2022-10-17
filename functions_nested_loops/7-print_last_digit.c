#include "main.h"
/**
 * print_last_digit - print last digit
 * @x: numero
 * Return: last digit
 */
int print_last_digit(int x)
{
int digit, r;
digit = x % 10;

if (x <= 0)
{
r = digit * -1;
_putchar (r + '0');
return (r);
}
else
{
_putchar (digit + '0');
return (digit);
}
}
