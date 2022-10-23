#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest:dest string
 * @src:src
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i, s;

for (i = 0; (i = dest[i]); i++)

;

for (s = 0; (s = src[s]); s++)
{
dest[i] = src[s];
i++;

}

return (dest);

}
