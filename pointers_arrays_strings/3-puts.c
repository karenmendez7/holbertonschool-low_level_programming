#include "main.h"
/**
 * _puts - prints a string
 * Return: 0
 * @str: var
 */
void _puts(char *str)
{
int c = 0;
for (c; str[c] != '\0'; c++)
{
_puthar(str[c]);
}
_putchar ('\n');
}
