#include "main.h"
/**
 * jack_bauer - prints every minute
 * Return: 0
 */
void jack_bauer(void)
{
int h , i , j , k , l , m;
for (h = 0; h < 24, h++)
{
i = h / 10;
j = h % 10;
for (m = 0; m < 60; m++)
{
k = m / 10;
l = m % 10;
_putchar ('0' + i);
_putchar ('0' + j);
_putchar (':')
_putchar ('0' + k);
_putchar ('0' + l);
}
}
}