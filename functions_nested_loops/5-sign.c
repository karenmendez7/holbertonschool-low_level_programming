#include "main.h"
/**
 * print_sign - print sign
 * @n: variable
 * Return: 0
*/
int print_sign(int n)
{
if (n > 0)
{
printf("%c +\n", n);

return (1);
}

if (n == 0)
{
printf("%d 0\n", n);

return (0);
}
if (n < 0)
{
printf("%c -\n", n);

return (-1);
}

}