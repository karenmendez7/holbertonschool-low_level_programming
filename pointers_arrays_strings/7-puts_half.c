#include "main.h"
/**
 * puts_half - prints half of a string
 * Retunr: 0
 * @str: var
 */
void puts_half(char *str)
{
int a, i;
for (a = 0; *(str + a) != '\0'; a++)
{
if (a % 2 == 1)
i = a / 2;
else
i = (a - 1) / 2;
}
for (i++; i < a; i++)
{
_putchar (str[i]);
}
_putchar ('\n');
}
