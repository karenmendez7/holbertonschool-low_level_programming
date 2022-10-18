# include "main.h"
# include <stdio.h>
/**
 * print_to_98 - print to 98
 * Return: 0
 * @n: number
 */
void print_to_98(int n)
{
for (; n < 98; n++)
{
printf("%d, ", n);
}
for (; n > 98; n--)
{
printf("%d, ", n);
}
if (n == 98)
printf("%d", n);
}
