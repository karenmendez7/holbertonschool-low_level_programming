#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: pointer dest
 * @src: pointer src
 * @n: var n
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
int n;
for (i = 0; dest[n]; i++)
;
for (i = 0; src[n]; i++)
{
dest[n] = src[n];
}
}
