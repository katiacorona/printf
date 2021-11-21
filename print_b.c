#include "main.h"
/**
 * _print_b - print an integer to binary
 * @n: the integer to print
 * @count: pointer to a counter for number of bytes
 */
void _print_b(unsigned int n, int *count)
{
int lastVal;
if (n > 1)
_print_b(n >> 1, count);
if (*count < 0)
return;
lastVal = _putchar('0' + n % 2);
if (lastVal < 0)
*count = (-1);
else
*count += lastVal;
}
/**
 * print_b - print na integer in binary
 * @args: the va_list with the integer to print as it's next elemnt
 *
 * Return: the number of bytes
 */
int print_b(va_list args)
{
int count = 0;
_print_b(va_arg(args, int), &count);
return (count);
}
