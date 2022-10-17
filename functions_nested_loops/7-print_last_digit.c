#include "main.h"
/**
 * print_last_digit - print last digit
 * @x: var
 * Return: last digit
 */
int print_last_digit(int x)
{
int digit;
digit = x % 10;

if (x < 0)
{
digit * -1;
_putchar (digit);
return (digit);
}
else
{
_putchar (digit);
return (digit);
}
}
