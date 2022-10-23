#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest:dest string
 * @src:src
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i;
int s;
for (i = 0; (i = dest[i]); i++)

;

for (s = 0; (s = src[s]); i++)
{
dest[i] = src[s];
}

return (dest);

}
