#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: pointer dest
 * @src: pointer src
 * @n: var n
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int s;
int n = 0;

for (i = 0; dest[i]; i++)

;
if (n >= 0)
for (s = 0; src[s]; s++)

{
dest[i] = src[s];
i++;
}

return (dest);

}
