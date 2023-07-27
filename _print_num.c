#include "main.h"

/**
 * _print_num - prints a num
 * @ls: List of arguments
 * Return: The number of arguments printed
 */
int _print_num(va_list ls)
{
int n;
int x;
int y;
unsigned int num;

n  = va_arg(ls, int);
x = 1;
y = 0;

if (n < 0)
{
y += _wr_char('-');
num = n * -1;
}
else
num = n;

for (; num / x > 9; )
x *= 10;

for (; x != 0; )
{
y += _wr_char('0' + num / x);
num %= x;
x /= 10;
}

return (y);
}
