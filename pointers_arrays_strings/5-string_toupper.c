#include "main.h"
/**
 * string_toupper - changes all lowercase letters
 * @s: string
 * Return: pointer char
 */
char *string_toupper(char *s)
{
int i = 0;
char *p;

p = s;
for (i = 0; s[i]; i++)
{
if (s[i] >= 97 && s[i] <= 1)
p[i] = (s[i] - 32);
else
p[i] = (s[i]);
}
return (s);
}
