#include <stdio.h>

/**
 *main - prints all the numbers of base 16 in lowercase
 *
 *return: Always 0:
 *
*/
int main(void)
{
int n;
char digit;
for (n = 0; n < 10; n++)
{
putchar((n % 10) + '0');
}
for (digit = 'a'; digit <= 'f'; digit++)
{
putchar(digit);
}
putchar('\n');
return (0);
}
