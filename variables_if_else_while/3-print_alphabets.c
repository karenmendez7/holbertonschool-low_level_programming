#include <stdio.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase
* Return: 0
*/

int main(void)

{
char az[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
putchar(az[i]);
}
putchar('\n´);
return (0);

}

