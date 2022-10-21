#include "main.h"
/**
 * puts2 - print every other char string
 * Return: 0
 * @str: string
 */
void puts2(char *str)
{
char s;
for (s = 0; *(str + s); s++)
if (str % 2 == 0)
_puts(str[s]);

return (0);

}
