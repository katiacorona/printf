#include "main.h"

/**
 * _print_r - print a string in reverse
 * @s: the string to print
 * @count: a pointer to counter fot the number of bytes printed
 */
void _print_r(char *s, int *count)
{
if (!(*s))
return;
_print_r(s + 1, count);
*count += _putchar(*s);
}
/**
 * print_r - print a string reverse
 * @args: the va_list with character to print as its next element
 *
 * Return: the number of bytes printed
 */
int print_r(va_list args)
{
int count = 0;
_print_r(va_arg(args, char *), &count);
return (count);
}
