#include "main.h"
/**
 * print_last_digit - print last digit
 * @x: numero
 * Return: last digit
 */
int print_last_digit(int x)
{
int digit;
digit = x % 10;

if (x <= 0)
{
_putchar (digit + '0');
return (digit);
}
else
{
_putchar (digit + '0');
return (digit);
}
}
