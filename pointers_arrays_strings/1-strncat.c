#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer dest
 * @src: pointer src
 * @n: var n
 */
char *_strncat(char *dest, char *src, int n)
{
int i, n;

for (i = 0; dest[i]; i++)

;

for (n = 0; src[n]; n++)
{
dest[i] = src[n];
i++;
}

return (dest);

}
