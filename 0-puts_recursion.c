#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - print a string
 * @s:string
 * Return:void
*/


void _puts_recursion(char *s)
{
if (*S =='\0')
{
putchar('\n');
return;
}
putchar(*s);
puts_recursion(s + 1);
}
