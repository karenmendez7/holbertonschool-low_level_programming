#include "main.h"
#include <stdio.h>
/**
 * _strlen - return length of a string
 * Return: 0
 * @s: 0
 */
int _strlen(char *s)
{
int i = 0;
while (*s != 0)
{
s++;
i++;
}
return (i);
}
