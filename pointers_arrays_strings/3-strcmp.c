#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer s1
 * @s2: pointer s2
 * Return: a
 */
int _strcmp(char *s1, char *s2)
{
int s = 0;
int a = 0;

while (s1[s] == s2[s])
{
if (s1[s] == '\0')
return (0);
s++;
}
a = (s1[s] - s2[s]);
return (a);
}
