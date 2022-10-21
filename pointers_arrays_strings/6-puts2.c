#include "main.h"
/**
 * puts2 - print every other char string
 * Return: 0
 * @str: string
 */
void puts2(char *str)
{
int s;
for (s = 0; *(str + s); s++)
{
if (s % 2 == 0)
_putchar(*(str + s));
}
_putchar('\n');
}
