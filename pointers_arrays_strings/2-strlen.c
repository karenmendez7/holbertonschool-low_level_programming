#include "main.h"
#include <stdio.h>
/**
 * _strlen - return length of a string
 * Return: 0
 * @s: 0
 */
int _strlen(char *s)
{
int i;
while (*s != NULL)
{
s++;
i++;
}
return (i);
}
