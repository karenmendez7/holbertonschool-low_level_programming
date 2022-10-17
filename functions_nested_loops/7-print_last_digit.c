#include "main.h"
/**
 * print_last_digit - print last digit
 * @x: var
 * Return: last digit
 */
int print_last_digit(int x)
{
int digit;
digit= x %10;

if(x < 0)
{
return (digit * -1);
}
else
{
return (digit);
}
}
