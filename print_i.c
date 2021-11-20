#include "main.h"

/**
 * _print_i - print an integer
 * @n: the integer print
 * @count: a pointer to a count for the number of bytes
*/
void _print_i(int n, int *count)
{
int lastRetVal;
if (n < 0)
{
*count = _putchar('-');
if (*count < 0)
return;
if (n < -9)
_print_i(n / -10, count);
if (*count < 0)
return;
lastRetVal = _putchar('0' - n % 10);
}
else
{
if (n > 9)
_print_i(n / 10, count);
if (*count < 0)
return;
lastRetVal = _putchar('0' + n % 10);
}
if (lastRetVal < 0)
*count = (-1);
else
*count += lastRetVal;
}
/**
 * print_i - print integer
 * @args: the va_list with the integer to print as it's next element
 *
 * Return: the number of bytes
 */
int print_i(va_list args)
{
int count = 0;
_print_i(va_arg(args, int), &count);
return (count);
}
