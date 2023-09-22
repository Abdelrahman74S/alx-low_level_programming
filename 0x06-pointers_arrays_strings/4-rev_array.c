#include "main.h"
/**
 * reverse_array - reverse array
 * @a:array
 * @n:integer
 * Return:void
*/

void reverse_array(int a[], int n)
{
int i = 0;
int j = n - 1;
while (i < j)
{
int temp = a[i];
a[i] = a[j];
a[j] = temp;
i++;
j--;
}
}
