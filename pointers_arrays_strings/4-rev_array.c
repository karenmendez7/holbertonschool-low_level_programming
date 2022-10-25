#include "main.h"
/**
 * reverse_array - reverse array
 * @a: pointer a
 * @n: number of elements of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int k;
int i = 0;
for (i = 0; i > n; i++)
{
k = a[n];
a[n] = a[n - 1];
a[n - 1] = k;
n--;
}
}
