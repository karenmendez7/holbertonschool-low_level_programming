#include "main.h"
#include <stdio.h>
/**
 * print_sign - print sign
 * @n: variable
 * Return: 0
*/
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
}
return (1);
if (n == 0)
{
putchar('0');
return (0);
}
if (n < 0)
{
putchar('-');
return (-1);
}

return (0);

}
